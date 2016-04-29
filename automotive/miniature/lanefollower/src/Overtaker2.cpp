#include <iostream>
#include <cstdio>
#include <cmath>

#include "opendavinci/odcore/base/KeyValueConfiguration.h"
#include "opendavinci/odcore/io/conference/ContainerConference.h"
#include "opendavinci/odcore/data/Container.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "automotivedata/GeneratedHeaders_AutomotiveData.h"

#include "Overtaker2.h"

using namespace std;
using namespace odcore::base;
using namespace odcore::base::module;
using namespace odcore::data;
using namespace automotive;
using namespace automotive::miniature;
//using namespace odtools::recorder;

Overtaker2::Overtaker2(int argc, char **argv) :
    TimeTriggeredConferenceClientModule(argc, argv, "Overtaker2") {}

Overtaker2::~Overtaker2() {}

void Overtaker2::setUp() {
    // This method will be called automatically _before_ running body().
}

void Overtaker2::tearDown() {
    // This method will be call automatically _after_ return from body().
}

// This method will do the main data processing job.
odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode Overtaker2::body() {
    //get values from the config file to determine if you're on the car or simulator
    KeyValueConfiguration kv = getKeyValueConfiguration();
    const bool sim = kv.getValue<uint32_t>("global.simulation"); //from the config file

    int32_t ULTRASONIC_FRONT_RIGHT;
    int32_t INFRARED_FRONT_RIGHT;
    int32_t INFRARED_REAR_RIGHT;
    int32_t ULTRASONIC_FRONT_CENTER;
    double OVERTAKING_DISTANCE;

    //sim value 0 = simulation, 1 is on the car
    if(sim == 0) { //todo: fine tune the different angles on the wheel and distances for overtake
        ULTRASONIC_FRONT_RIGHT = 4;
        INFRARED_FRONT_RIGHT = 0;
        INFRARED_REAR_RIGHT = 2;
        ULTRASONIC_FRONT_CENTER = 3;
        OVERTAKING_DISTANCE = 6; //for a steep left turn 6 seems to be good
    }
    else {
        ULTRASONIC_FRONT_RIGHT = 4;
        INFRARED_FRONT_RIGHT = 0;
        INFRARED_REAR_RIGHT = 2;
        ULTRASONIC_FRONT_CENTER = 3;
        OVERTAKING_DISTANCE = 15;
    }
    //comparison values for sensors
    /*
    
    const double HEADING_PARALLEL = 0.04;
*/
    enum Move {FORWARD, TURN_LEFT, TURN_RIGHT, FOLLOW_LEFT, ADJUST_RIGHT, ADJUST_LEFT, STOP, SLIGHT_L};
    enum Object {SETUP, TRACK_OBJECT, FOUND, NOT_FOUND};

    //int startedOvertaking = 0;
    Move moving = FORWARD; //standard is forward
    Object obj = SETUP;

    double trackWheelAngle = 0; //debug use to check which angle the wheels are in
    //test values to be compared with sensor values
    double distanceToOvertake = 0; //use this value to see how far away the object to overtake is
    double ultrafront, ultrafrontright, irfr, irrr;

    while (getModuleStateAndWaitForRemainingTimeInTimeslice() == odcore::data::dmcp::ModuleStateMessage::RUNNING) {


        // 1. Get most recent vehicle data:
        Container containerVehicleData = getKeyValueDataStore().get(VehicleData::ID());
        VehicleData vd = containerVehicleData.getData<VehicleData> ();

        //The following makes it possible to get the sensor readings
        // 2. Get most recent sensor board data: comes from automotive/miniature
        Container containerSensorBoardData = getKeyValueDataStore().get(automotive::miniature::SensorBoardData::ID());
        SensorBoardData sbd = containerSensorBoardData.getData<SensorBoardData> ();

        // Create vehicle control data.
        VehicleControl vc;

        //Sensors
        distanceToOvertake = sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_CENTER);
        ultrafront = sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_CENTER);
        ultrafrontright = sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_RIGHT);
        irfr = sbd.getValueForKey_MapOfDistances(INFRARED_FRONT_RIGHT);
        irrr = sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT);

        //moving scheme
        if(moving == FORWARD) {
            // Go FORWARD
            vc.setSpeed(1); //insert the speed from lanefollow here****
            vc.setSteeringWheelAngle(0);

            //onLeftLane = false;
        }
        else if(moving == TURN_LEFT) {
            vc.setSpeed(1);
            vc.setSteeringWheelAngle(-0.5); //sharp left turn to avoid object
        }
        else if(moving == TURN_RIGHT) {
            vc.setSpeed(1);
            vc.setSteeringWheelAngle(0.5); //sharp right turn
        }
        //used to smoothly get back into the right lane after an overtaking is done
        else if(moving == SLIGHT_L) {
            vc.setSpeed(1);
            vc.setSteeringWheelAngle(-0.1);
        }

        //TODO MAYBE CHANGE THIS INTO A CALL TO LANEFOLLOWING ON LEFT LANE
        //OR "OVERRIDE" LANEFOLLOW TO KEEP OBJECT ON SPECIFIC LENGTH FROM VEHICLE UNTIL OVERTAKE IS DONE
        else if(moving == FOLLOW_LEFT) {
            vc.setSpeed(1);
            vc.setSteeringWheelAngle(0);
            //onLeftLane = true;
        }
        else if(moving == STOP) {
            vc.setSteeringWheelAngle(0);
            vc.setSpeed(0);
        }
        //less steep right turn to get back into the right lane
        else if(moving == ADJUST_RIGHT) {
            vc.setSpeed(1);
            vc.setSteeringWheelAngle(0.5);
            
        }
        else if(moving == ADJUST_LEFT) {
            vc.setSpeed(1);
            vc.setSteeringWheelAngle(-0.5);
        }

        //Calculations for overtaking
        //looks for an object to overtake
        if(obj == SETUP) {
            
            //if an object is discovered
            if(distanceToOvertake > 0 && distanceToOvertake < 15) { // 30 real life?
                obj = FOUND;
                cout << "found " << endl;
            }   
        }

        else if(obj == TRACK_OBJECT) {
            //here we can check if an object is suitable for overtaking before moving to overtaking state
            if(distanceToOvertake <= OVERTAKING_DISTANCE) {
                obj = FOUND;
            }
        }
        //if an object is found start the overtaking process
        else if(obj == FOUND) {
            
            //distanceToOvertake = sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_CENTER);
            //TODO SIMPLIFY THIS TO BOTH IR SENSORS READ A VALUE > 0
            if((irrr > 0 &&
                    irrr < 10 &&
                    irfr > 0 &&
                    irfr < 10)) {
                moving = FORWARD;
                
            }

            //start overtaking object
            if(ultrafront <= OVERTAKING_DISTANCE || 
                    ultrafrontright > 0) {
                moving = TURN_LEFT;
                
            }
            //if object is recognised in rear-R IR && nothing in front-R IR sensor start turning right
            if(irrr > 0 && 
                    irfr < 0) {
                moving = TURN_RIGHT;
                
            }
            
            //if front right IR > back right IR and back has a reading adjust to the right
            if(irfr > irrr && 
                    irrr > 0) {
                moving = ADJUST_RIGHT;
            }
            //TODO: ADD AN ADJUST_LEFT FUNCTION HERE for the case of IRRR > IRFR && IRFR has reading

            //no sensors have readings go back to forward and look for a new object to overtake (lanefollow)
            else if(irrr < 0 && 
                    ultrafront < 0 &&
                    ultrafrontright < 0 &&
                    irfr < 0) { //distanceToOvertake > OVERTAKING_DISTANCE 

                moving = FORWARD; //SLIGHT_L will move slightly to left to compensate with merging back to right lane
                //obj = SETUP;
            }
        }
        //prints the current steeringwheel angle for debug purposes
        trackWheelAngle = vc.getSteeringWheelAngle();
        cout << trackWheelAngle << endl;

        // Create container for finally sending the data.
        Container c(vc);
        // Send container.
        getConference().send(c);

    }

    return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;
}

#include <iostream>
#include <cstdio>
#include <cmath>

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
    //comparison values for sensors
    /*
    
    const double HEADING_PARALLEL = 0.04;
*/
    const int32_t ULTRASONIC_FRONT_RIGHT = 4;
    const int32_t INFRARED_FRONT_RIGHT = 0;
    const int32_t INFRARED_REAR_RIGHT = 2;
    const int32_t ULTRASONIC_FRONT_CENTER = 3;
    const double OVERTAKING_DISTANCE = 6;

    enum Move {FORWARD, TURN_LEFT, TURN_RIGHT, FOLLOW_LEFT, ADJUST_RIGHT, ADJUST_LEFT, STOP};
    enum Object {SETUP, TRACK_OBJECT, FOUND, NOT_FOUND};

    //int startedOvertaking = 0;
    Move moving = FORWARD; //standard is forward
    Object obj = SETUP;
    double trackWheelAngle = 0; //debug use to check which angle the wheels are in
    //test values to be compared with sensor values
    double distanceToOvertake = 0; //use this value to see how far away the object to overtake is

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

        distanceToOvertake = sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_CENTER);

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
            vc.setSteeringWheelAngle(0.4); //sharp right turn
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
            vc.setSteeringWheelAngle(0.5);
        }

        //Calculations for overtaking
        //looks for an object to overtake
        if(obj == SETUP) {
            
            //if an object is discovered
            if(distanceToOvertake > 0 && distanceToOvertake < 15) {
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
            if((sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT) > 0 && 
                    sbd.getValueForKey_MapOfDistances(INFRARED_FRONT_RIGHT) > 0) || 
                    (distanceToOvertake > OVERTAKING_DISTANCE)) {
                moving = FORWARD;
                
            }

            //start overtaking object
            if(sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_CENTER) <= OVERTAKING_DISTANCE || 
                    sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_RIGHT) > 0) {
                moving = TURN_LEFT;
                
            }
            //if object is recognised in rear-R IR && nothing in front-R IR sensor start turning right
            if(sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT) > 0 && 
                    sbd.getValueForKey_MapOfDistances(INFRARED_FRONT_RIGHT) < 0) {
                moving = TURN_RIGHT;
                
            }
            
            
            //if front IR > back right IR and back has a reading adjust to the right right
            if(sbd.getValueForKey_MapOfDistances(INFRARED_FRONT_RIGHT) > sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT) && 
                    sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT) > 0) {
                moving = ADJUST_RIGHT;
            }
            //TODO: ADD AN ADJUST_LEFT FUNCTION HERE for the case of IRRR > IRFR && IRFR has reading

            //no sensors have readings go back to forward and look for a new object to overtake
            else if(sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT) < 0 && 
                    sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_CENTER) < 0 &&
                    sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_RIGHT) < 0 &&
                    sbd.getValueForKey_MapOfDistances(INFRARED_FRONT_RIGHT) < 0) { //distanceToOvertake > OVERTAKING_DISTANCE 

                moving = FORWARD;
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

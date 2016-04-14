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
    const int32_t ULTRASONIC_FRONT_RIGHT = 4;
    
    

    
    const double HEADING_PARALLEL = 0.04;
*/
    const int32_t INFRARED_FRONT_RIGHT = 0;
    const int32_t INFRARED_REAR_RIGHT = 2;
    const int32_t ULTRASONIC_FRONT_CENTER = 3;
    const double OVERTAKING_DISTANCE = 5.5;

    enum Move {FORWARD, TURN_LEFT, TURN_RIGHT, FOLLOW_LEFT, BACK_TO_RIGHT};
    enum Object {SETUP, TRACK_OBJECT, FOUND, NOT_FOUND};
    //enum InOvertake {RIGHT, LEFT}; //TEST
    Move moving = FORWARD;
    Object obj = SETUP;
    //InOvertake overtaking = RIGHT; //TEST
    //bool onLeftLane = false;

    //test values to be compared with sensor values
    double distanceToOvertake = 0; //use this value to see how far away the object to overtake is
    //int32_t objOnSide = 0;

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

        //moving scheme
        if(moving == FORWARD) {
            // Go FORWARD
            vc.setSpeed(1); //insert the speed from lanefollow here****
            vc.setSteeringWheelAngle(0);
            //onLeftLane = false;
        }
        if(moving == TURN_LEFT) {
            vc.setSpeed(1);
            vc.setSteeringWheelAngle(-25); //sharp left turn to avoid object
        }
        if(moving == TURN_RIGHT) {
            vc.setSpeed(1);
            vc.setSteeringWheelAngle(25); //sharp right turn
        }
        //TODO MAYBE CHANGE THIS INTO A CALL TO LANEFOLLOWING ON LEFT LANE
        //OR "OVERRIDE" LANEFOLLOW TO KEEP OBJECT ON SPECIFIC LENGTH FROM VEHICLE UNTIL OVERTAKE IS DONE
        if(moving == FOLLOW_LEFT) {
            vc.setSpeed(1);
            vc.setSteeringWheelAngle(0);
            //onLeftLane = true;
        }
        distanceToOvertake = sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_CENTER);
        //Calculations for overtaking
        //looks for an object to overtake
        if(obj == SETUP) {
            

            if(distanceToOvertake > 0) {
            // here we may check if the object is stationary by subtracting the current distance to an old distance
                obj = TRACK_OBJECT;
            }
            
        }
        else if(obj == TRACK_OBJECT) {
            //distanceToOvertake = sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_CENTER);
            if(distanceToOvertake <= OVERTAKING_DISTANCE) {
                obj = FOUND;
            }
        }

        else if(obj == FOUND) {
            //distanceToOvertake = sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_CENTER);
            
            //start overtaking object
            if(distanceToOvertake <= OVERTAKING_DISTANCE) {
                moving = TURN_LEFT;
                
            }
            //if object is recognised in rear IR sensor start turning right
            if(sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT) > 0 && sbd.getValueForKey_MapOfDistances(INFRARED_FRONT_RIGHT) <= 0) {
                moving = TURN_RIGHT;
                
            }
            //TODO SIMPLIFY THIS TO BOTH SENSORS READ A VALUE > 0
            if((sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT) > 0 && sbd.getValueForKey_MapOfDistances(INFRARED_FRONT_RIGHT) > 0) || (distanceToOvertake > OVERTAKING_DISTANCE)) {
                moving = FORWARD;
                
            }
            if(sbd.getValueForKey_MapOfDistances(INFRARED_FRONT_RIGHT) > sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT) && sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT) > 0) {
                moving = TURN_RIGHT;
            }


        }

            

        // Create container for finally sending the data.
        Container c(vc);
        // Send container.
        getConference().send(c);
    }

    return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;
}

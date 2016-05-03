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
//using namespace odcore::base::module;
using namespace odcore::data;
using namespace automotive;
using namespace automotive::miniature;
//using namespace odtools::recorder;

Overtaker2::Overtaker2(bool simulation) :
    sim(simulation),
    overtaking(true),
    hasOvertaken(false),

    ULTRASONIC_FRONT_RIGHT(4),
    INFRARED_FRONT_RIGHT(0),
    INFRARED_REAR_RIGHT(2),
    ULTRASONIC_FRONT_CENTER(3),
    OVERTAKING_DISTANCE(15),

    moving(FORWARD),
    obj(SETUP),
    trackWheelAngle(0),
    distanceToOvertake(0),
    steering(0),
    speed(1) {

        //simulation value 1 = simulation, 0 is on the car
        if(simulation) { //todo: fine tune the different angles on the wheel and distances for overtake
            ULTRASONIC_FRONT_RIGHT = 4;
            INFRARED_FRONT_RIGHT = 0;
            INFRARED_REAR_RIGHT = 2;
            ULTRASONIC_FRONT_CENTER = 3;
            OVERTAKING_DISTANCE = 6; //for a steep left turn 6 seems to be good
        }
    
    }

Overtaker2::~Overtaker2() {}

void Overtaker2::process(Container &containerSensorBoardData) {
    checkSensors(containerSensorBoardData);
    moveState();
}

double Overtaker2::getDesiredSteering() {
    return steering;
}

double Overtaker2::getDesiredSpeed() {
    return speed;
}

bool Overtaker2::isOvertaking() {
    return overtaking;
}

bool Overtaker2::shouldOvertake(Container &containerSensorBoardData) {

    SensorBoardData sbd = containerSensorBoardData.getData<automotive::miniature::SensorBoardData> ();

    if(sbd.getValueForKey_MapOfDistances(3) > 0 && sbd.getValueForKey_MapOfDistances(3) < 16) {
        cout << "Should overtake!!!!!!!" << endl;
        return true;
    }
    
    return false;

}

void Overtaker2::moveState() {

    //moving scheme
    if(moving == FORWARD) {
        // Go FORWARD
        steering = 0;

        //onLeftLane = false;
    }
    else if(moving == TURN_LEFT) {
        steering = -0.5; //sharp left turn to avoid object
    }
    else if(moving == TURN_RIGHT) {
        steering = 0.5; //sharp right turn
    }

    //TODO MAYBE CHANGE THIS INTO A CALL TO LANEFOLLOWING ON LEFT LANE
    //OR "OVERRIDE" LANEFOLLOW TO KEEP OBJECT ON SPECIFIC LENGTH FROM VEHICLE UNTIL OVERTAKE IS DONE
    else if(moving == FOLLOW_LEFT) {
        steering = 0;
        //onLeftLane = true;
    }
    else if(moving == STOP) {
        steering = 0;
        speed = 0;
    }
    //less steep right turn to get back into the right lane
    else if(moving == ADJUST_RIGHT) {
        steering = 0.5;
    }
    else if(moving == ADJUST_LEFT) {
        steering = -0.5;
        hasOvertaken = true;
    }

    cout << "" << moving << endl;

}


// This method will do the main data processing job.
void Overtaker2::checkSensors(Container &containerSensorBoardData) {
    //get values from the config file to determine if you're on the car or simulator
    //KeyValueConfiguration kv = getKeyValueConfiguration();
    //const bool sim = kv.getValue<uint32_t>("global.simulation") == 1; //from the config file


    //comparison values for sensors
    /*
    
    const double HEADING_PARALLEL = 0.04;
*/

    //The following makes it possible to get the sensor readings
    // 2. Get most recent sensor board data: comes from automotive/miniature
    //Container containerSensorBoardData = getKeyValueDataStore().get(automotive::miniature::SensorBoardData::ID());
    SensorBoardData sbd = containerSensorBoardData.getData<SensorBoardData> ();

    distanceToOvertake = sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_CENTER);

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
        if((sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT) > 0 &&
                sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT) < 10 &&
                sbd.getValueForKey_MapOfDistances(INFRARED_FRONT_RIGHT) > 0 &&
                sbd.getValueForKey_MapOfDistances(INFRARED_FRONT_RIGHT) < 10)) {
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


        //no sensors have readings go back to forward and look for a new object to overtake (lanefollow)
        else if(sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT) < 0 && 
                sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_CENTER) < 0 &&
                sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_RIGHT) < 0 &&
                sbd.getValueForKey_MapOfDistances(INFRARED_FRONT_RIGHT) < 0) { //distanceToOvertake > OVERTAKING_DISTANCE 
            
            moving = FORWARD;
            if(hasOvertaken)
                overtaking = false;
            //obj = SETUP;
        }
    }
  
  /*      //prints the current steeringwheel angle for debug purposes
        trackWheelAngle = vc.getSteeringWheelAngle();
        cout << trackWheelAngle << endl;

        // Create container for finally sending the data.
        Container c(vc);
        // Send container.
        getConference().send(c);
*/
}

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
using namespace odcore::data;
using namespace automotive;
using namespace automotive::miniature;

Overtaker2::Overtaker2(bool simulation) :
    sim(simulation),
    overtaking(false),
    hasOvertaken(false),

    // Values for the real car
    ULTRASONIC_FRONT_RIGHT(1),
    INFRARED_FRONT_RIGHT(2),
    INFRARED_REAR_RIGHT(3),
    ULTRASONIC_FRONT_CENTER(0),
    OVERTAKING_DISTANCE(44),
    ultrathreshold(40),
    irthreshold(28),
    steeringLeft(-0.785),
    steeringRight(0.785),
    states(InRightLane),
    ultrafrontright(0),
    irfr(0),
    irrr(0),
    LANEFOLLOW(false),
    steeringCounter(0),

    trackWheelAngle(0),
    distanceToOvertake(0),
    steering(0),
    speed(2) {

        //simulation value 1 = simulation, 0 is on the car
        if(simulation) { 
            ULTRASONIC_FRONT_RIGHT = 4;
            INFRARED_FRONT_RIGHT = 0;
            INFRARED_REAR_RIGHT = 2;
            ULTRASONIC_FRONT_CENTER = 3;
            OVERTAKING_DISTANCE = 8; //for a steep left turn 6 seems to be good
            ultrathreshold = 20;
            irthreshold = 10;
            steeringLeft = -1.0;
            steeringRight = 0.3;
        }
    
    }

Overtaker2::~Overtaker2() {}

void Overtaker2::process(Container &containerSensorBoardData) {
    
    checkSensors(containerSensorBoardData);
    
    if(states == InChangeToRightLane) {
        changeToRightLane();
    } else {
        changeToLeftLane();
    }

}

double Overtaker2::getDesiredSteering() {
    return steering;
}

double Overtaker2::getDesiredSpeed() {
    return speed;
}

bool Overtaker2::shouldChangeToRight() {
    
    if(irfr <= 0 && ultrafrontright <= 0) {
        return true;
    }

    return false;

}

bool Overtaker2::shouldOvertake(Container &containerSensorBoardData) {

    checkSensors(containerSensorBoardData);

    if(states != InLeftLane) {
        
        if(overtaking) {
            return true;
        }

        if(distanceToOvertake > 0 && distanceToOvertake < OVERTAKING_DISTANCE) {
            overtaking = true;
            return true;
        }
    } else {
        if(overtaking && shouldChangeToRight()) {
            states = InChangeToRightLane;
            return true;
        }
    }

    return false;

}

void Overtaker2::changeToRightLane() {

    if(states == InChangeToRightLane) {

        if(irfr < 0 && irrr < 0 && steeringCounter > 40) {
            steering = 0;
            overtaking = false;
            states = InRightLane;
            steeringCounter = 0;
        } else {
            steering = steeringRight;
        }

        steeringCounter++;

    }

}

void Overtaker2::changeToLeftLane() {

    if (states == InRightLane) {                       // Initial state

        if((distanceToOvertake > OVERTAKING_DISTANCE || distanceToOvertake < 0) && ultrafrontright > 0) { // When the front US-sensor does not see the overtaking obsticle(the car has turned enough)
                    //  ((distanceToOvertake > OVERTAKING_DISTANCE || distanceToOvertake < 0) && ultrafrontright > 0)
                                                                               // steeringCounter > 20 makes sure that the car turns left for at least "a ẅhile", in order to prevent the US to stop seeing the car to the right
            states = InChangeToLeftLane;
            //steeringCounter = 0;
        
        }

        steering = steeringLeft;
        //steeringCounter++;

    } else if (states == InChangeToLeftLane) { // When the car has turned left and should position itself in the leftlane

        if(ultrafrontright > 0 || steeringCounter < 20) { // Go forward until the ultra sound front right sensor does not see the obsticle anymore
            steering = 0;
            steeringCounter++;
        } else {
            steering = steeringRight;
        }

        if((irfr - irrr) > 0 && (irfr - irrr) < 2) { // When the infrared sensor on the side of the car gives(almost) the same value, the car is going straight
            states = InLeftLane;
            steeringCounter = 0;
        }

    }

}

void Overtaker2::checkSensors(Container &containerSensorBoardData) {

    SensorBoardData sbd = containerSensorBoardData.getData<SensorBoardData> ();

    //Sensors
    distanceToOvertake = sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_CENTER);
    ultrafrontright = sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_RIGHT);
    irfr = sbd.getValueForKey_MapOfDistances(INFRARED_FRONT_RIGHT);
    irrr = sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT);

}

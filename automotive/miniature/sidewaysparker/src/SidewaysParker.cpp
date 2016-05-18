/**
 * sidewaysparker - Sample application for realizing a sideways parking car.
 * Copyright (C) 2012 - 2015 Christian Berger
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <cstdio>
#include <cmath>
#include <iostream>

#include "opendavinci/odcore/io/conference/ContainerConference.h"
#include "opendavinci/odcore/data/Container.h"
#include "opendavinci/odcore/base/KeyValueConfiguration.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "automotivedata/GeneratedHeaders_AutomotiveData.h"

#include "SidewaysParker.h"

namespace automotive {
    namespace miniature {

        using namespace std;
        using namespace odcore::base;
        using namespace odcore::data;
        using namespace automotive;
        using namespace automotive::miniature;

        SidewaysParker::SidewaysParker(const int32_t &argc, char **argv) : TimeTriggeredConferenceClientModule(argc, argv, "SidewaysParker") {
        }

        // Vehicle 
        VehicleControl vc;          // Create vehicle control
        VehicleData vd;             // Create Vehicle data

        // SENSOR IDs
        const int32_t ULTRASONIC_FRONT_CENTER = 0;
        const int32_t INFRARED_FRONT_RIGHT = 2;
        const int32_t INFRARED_REAR = 4;

        // States of the car during the parking procedure
        enum VehicleState {Initial, SearchingForGap, Measuring, Positioning, Reversing, StraighteningBack, StraighteningFront, Finishing, Stopping};
        VehicleState car = Initial;

        // Varialbes for parking evaluation
        double sensor = 0;
        double sensorPrev=0;
        double gap = 0;              
        double startDistance = 0;
        double currentDistance = 0;
        double distance = 0;
        double rear=0;
        double front=0;
        bool stopped=0;
        int brakeTime=0;
                
        // Varialbes for parking evaluation
        double MIN_PARKING = 6.5;            // Simulator value
        double REV_DISTANCE = 1.2;           // Simulator value
        double REV_BUFFER = 2.2;             // Simulator value
        double FINISH_BUFFER = 3.0;          // Simulator value
        int speedForward = 2;
        int speedReverse = 1;

        SidewaysParker::~SidewaysParker() {}

        void SidewaysParker::setUp() {
        }

        void SidewaysParker::tearDown() {
            // This method will be call automatically _after_ return from body().
        }

        void measureGap(){
            if(sensor>0 && sensorPrev>0){       // If an object is detected then the gap will be calculated and evaluated.      
                gap = currentDistance - startDistance;
                if(gap>MIN_PARKING){
                    vc.setSpeed(0);
                    car= Positioning;
                    vc.setSteeringWheelAngle(-0.3);
                }else{
                    car= SearchingForGap;        // If the gap is too small the car will return to the SearchingForGap phase.
                }         
            }
        }

        bool checkStopped(){
            if(brakeTime>20){
                stopped=true;
                brakeTime = 0;
            }
            else        stopped=false;
            return stopped;
        }

        void reverse(){
                distance = currentDistance - startDistance;
                if(distance>6){
                    startDistance = vd.getAbsTraveledPath();
                    vc.setSteeringWheelAngle(-5);
                    car = StraighteningBack;
                    startDistance=currentDistance;
                }
        }

        void straightenBack(){     
                vc.setSpeed(speedReverse);
                vc.setSteeringWheelAngle(-3);
                distance = currentDistance - startDistance;
                if(distance>5){
                    vc.setSpeed(0);
                    vc.setSteeringWheelAngle(0);
                    car=StraighteningFront;
                }
                else if (rear<=REV_BUFFER && rear>=0){
                    vc.setSpeed(0);
                    if(checkStopped()) car=StraighteningFront;
                    }
                }
        

        void straightenFront(){

            if(front<=REV_BUFFER && front>=0){
                vc.setSpeed(0);
                if(checkStopped()) car=Finishing;
            }
        }


 
        // This method will do the main data processing job.
        odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode SidewaysParker::body() {
                    

            // Constants for Parking
            KeyValueConfiguration kv = getKeyValueConfiguration();
            bool SIM = kv.getValue<int32_t> ("global.simulation") == 1;
            if(!SIM){
                MIN_PARKING = 13;           // 20 interrupts = 100cm     14 inerrupts = 70cm       1 interrupt = 5cm
                REV_DISTANCE = 3;           // Distance to reverse back into space
                REV_BUFFER = 6;            // Rear/front sensor distance before car will brake whilst maintaining the maneuver.
                FINISH_BUFFER = 6;         // Rear/front sensor distance for acceptable final parking position
                speedForward= 14;
                speedReverse= -62;
            }
            while (getModuleStateAndWaitForRemainingTimeInTimeslice() == odcore::data::dmcp::ModuleStateMessage::RUNNING) {

                // 1. Get most recent vehicle data:
                Container containerVehicleData = getKeyValueDataStore().get(automotive::VehicleData::ID());
                vd = containerVehicleData.getData<VehicleData> ();

                // 2. Get most recent sensor board data:
                Container containerSensorBoardData = getKeyValueDataStore().get(automotive::miniature::SensorBoardData::ID());
                SensorBoardData sbd = containerSensorBoardData.getData<SensorBoardData> ();
                sensorPrev=sensor;                  // Assign the value of the previous sensor reading.
                sensor = sbd.getValueForKey_MapOfDistances(INFRARED_FRONT_RIGHT);
                rear = sbd.getValueForKey_MapOfDistances(INFRARED_REAR);
                front = sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_CENTER);
                currentDistance = vd.getAbsTraveledPath();



                if(car==Initial){       // Starting state of the car.
                    vc.setSpeed(speedForward);
                    vc.setSteeringWheelAngle(0);
                    if(sensor>0 && sensorPrev>0){        // Car must first detect an object to start parallel parking procedure.
                        car=SearchingForGap;
                    }
                }

                else if(car==SearchingForGap){
                    vc.setSpeed(speedForward);
                    if(sensor<0 && sensorPrev<0){       // If the sensor reading is -1, the gap will start being measured and the starting distance of the car is noted.
                        startDistance= vd.getAbsTraveledPath();
                        car=Measuring;

                    }
                }

                else if(car==Measuring){
                    measureGap();
                }

                else if (car==Positioning){
                   brakeTime++;
                   if(checkStopped()){
                        vc.setSpeed(speedReverse);
                        vc.setSteeringWheelAngle(4);
                        car=Reversing;
                        startDistance= vd.getAbsTraveledPath();
                    }
                }

                else if (car==Reversing){
                    reverse();
                }    

                else if (car==StraighteningBack){
                   straightenBack();
                }

                else if (car==StraighteningFront){
                    straightenFront();
                }   

 

                else if (car==Finishing){
                    if(rear>0 && rear<=FINISH_BUFFER) vc.setSpeed(speedForward);
                    else if(front>0 && front<=FINISH_BUFFER) vc.setSpeed(speedReverse);
                    else{ 
                        vc.setSpeed(0);
                        car=Stopping;
                    }
                }

                else if (car==Stopping){
                    vc.setSpeed(0);
                    if(checkStopped())  std::cout << "Finished Parking." << "\n";
                }
                
                // Create container for finally sending the data.
                
                Container c(vc);
                // Send container.
                getConference().send(c);

            }
            return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;
        }
    }
}


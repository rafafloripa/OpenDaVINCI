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

        SidewaysParker::SidewaysParker(const int32_t &argc, char **argv) :
            TimeTriggeredConferenceClientModule(argc, argv, "SidewaysParker") {
        }

        SidewaysParker::~SidewaysParker() {}

        void SidewaysParker::setUp() {
            // This method will be call automatically _before_ running body().
        }

        void SidewaysParker::tearDown() {
            // This method will be call automatically _after_ return from body().
        }

        // This method will do the main data processing job.
        odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode SidewaysParker::body() {
  
           // Parameters for overtaking.
            //const int32_t ULTRASONIC_FRONT_CENTER = 3;
            //const int32_t ULTRASONIC_FRONT_RIGHT = 4;
            const int32_t INFRARED_FRONT_RIGHT = 0;
            //const int32_t INFRARED_REAR_RIGHT = 2;
            const int32_t INFRARED_REAR = 1;
            double sensor = 0;
            //States of the car during the parking procedure
            enum VehicleState {Initial, SearchingForGap, Measuring, Positioning, Angling, Reversing, Straightening, Straightening2, Finishing, Stopping};
            VehicleState car = Initial;
            double gap = 0;              
            double startDistance = 0;
            double currentDistance = 0;
            double startAngle;
            double angle;
            double rear;
            VehicleControl vc;          // Create vehicle control data.

            while (getModuleStateAndWaitForRemainingTimeInTimeslice() == odcore::data::dmcp::ModuleStateMessage::RUNNING) {

                // 1. Get most recent vehicle data:
                Container containerVehicleData = getKeyValueDataStore().get(automotive::VehicleData::ID());
                VehicleData vd = containerVehicleData.getData<VehicleData> ();

                // 2. Get most recent sensor board data:
                Container containerSensorBoardData = getKeyValueDataStore().get(automotive::miniature::SensorBoardData::ID());
                SensorBoardData sbd = containerSensorBoardData.getData<SensorBoardData> ();
                sensor = sbd.getValueForKey_MapOfDistances(INFRARED_FRONT_RIGHT);
                rear = sbd.getValueForKey_MapOfDistances(INFRARED_REAR);


                
                if(car==Initial){       // Starting state of the car.
                    vc.setSpeed(2);
                    if(sensor>0){        // Car must first detect an object to start parallel parking procedure.
                        car=SearchingForGap;
                    }
                }

                else if(car==SearchingForGap){
                    std::cout << "Searching reading: " << sensor << "\n";
                    if(sensor<0){       // If the sensor reading is -1, the gap will start being measured and the starting distance of the car is noted.
                        startDistance= vd.getAbsTraveledPath();
                        car=Measuring;
                    }
                }

                else if(car==Measuring){
                    std::cout << "Measuring reading: " << sensor << "\n";
                    if(sensor>0){       // If an object is detected then the gap will be calculated and evaluated.
                        currentDistance = vd.getAbsTraveledPath();
                        gap = currentDistance - startDistance;
                        std::cout << "gap is: " << gap << "\n";
                        if(gap>6.5){
                            std::cout << "******************* Parking gap found. ************" << "\n";
                            vc.setSpeed(0);
                            car= Positioning;
                        }else{
                            car=SearchingForGap;        // If the gap is too small the car will return to the SearchingForGap phase.
                        }
                    } 
                }

                else if (car==Positioning){
                    if(vd.getSpeed()<0.05){
                        startAngle=vd.getHeading();
                        car=Angling;
                    }
                }

                else if (car==Angling){
                    angle=vd.getHeading();
                    std::cout << "angle is: " << angle << "\n";
                    vc.setSpeed(-0.3);
                    vc.setSteeringWheelAngle(4);
                    if(angle>=(startAngle+0.9)){
                        startDistance= vd.getAbsTraveledPath();
                        car=Reversing;
                    }
                }    

                else if (car==Reversing){
                    currentDistance = vd.getAbsTraveledPath();
                    if(currentDistance - startDistance >= 1.1){
                        car=Straightening;
                    }
                    if(rear<=2.4 && rear>=0){
                        car=Straightening2;
                        vc.setSpeed(0);
                        vc.setSteeringWheelAngle(0);
                    }
                    vc.setSpeed(-0.45);
                    vc.setSteeringWheelAngle(0);
                }
            
                 else if (car==Straightening){
                    angle=vd.getHeading();
                    std::cout << "currentAngle is: " << angle << "\n";
                    std::cout << "startAngle is: " << startAngle << "\n";
                    vc.setSpeed(-0.45);
                    vc.setSteeringWheelAngle(-3);
                    if(rear<=2.4 && rear>=0){
                        vc.setSpeed(0);
                        if(vd.getSpeed()<=0.00){
                            car=Straightening2;
                        }
                    }
                    else if(angle<=(startAngle+0.01)){
                        vc.setSpeed(-.25);
                        vc.setSteeringWheelAngle(0);
                        car=Finishing;
                    } 
                }

                else if (car==Straightening2){
                    vc.setSteeringWheelAngle(2);
                    vc.setSpeed(0.2);
                    angle=vd.getHeading();
                    std::cout << "currentAngle is: " << angle << "\n";
                    std::cout << "startAngle is: " << startAngle << "\n";
                     if(angle<=(startAngle+0.01)){
                        vc.setSpeed(0);
                        vc.setSteeringWheelAngle(0);
                        car=Finishing;
                    } 
                    
                }    

                else if (car==Finishing){
                    if(rear>0 && rear<=3.2){
                        vc.setSpeed(0);
                        car=Stopping;
                    }
                    else{
                        vc.setSpeed(-0.25);
                    }
                }

                else if (car==Stopping){
                    vc.setSpeed(0);
                    if(vd.getSpeed()<=0.00){
                        std::cout << "Finished Parking." << "\n";
                    }
                }
                
                // Create container for finally sending the data.
                Container c(vc);
                // Send container.
                getConference().send(c);

            }
            return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;
        }
    }
} // automotive::miniature


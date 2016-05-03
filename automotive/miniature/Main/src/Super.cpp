#include <iostream>

#include <opendavinci/odcore/base/Thread.h>
#include "opendavinci/odcore/data/Container.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "automotivedata/GeneratedHeaders_AutomotiveData.h"

#include "Super.h"

//#include "../../lanefollower/include/LaneFollower.h"

using namespace std;
using namespace odcore::base;
using namespace odcore::base::module;
using namespace odcore::data;
using namespace automotive;

Super::Super(int argc, char **argv) :
    TimeTriggeredConferenceClientModule(argc, argv, "Super"),
    argCount(argc),
    argVector(argv)
    {}

Super::~Super() {}

void Super::setUp() {
    // This method will be call automatically _before_ running body().
  //  laneFollower.start(); 
}

void Super::tearDown() {
    // This method will be call automatically _after_ return from body().
    //laneFollower.release();
}

// This method will do the main data processing job.
odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode Super::body() { 

    VehicleControl vehicleControl;

    KeyValueConfiguration kv = getKeyValueConfiguration();
    bool debug = true;//kv.getValue<int32_t> ("lanefollower.debug") == 1;
    bool simulation = kv.getValue<int32_t> ("global.simulation") == 1;
    
    LaneFollower laneFollower(debug, simulation);
    Overtaker2 overtaker(simulation);

    while (getModuleStateAndWaitForRemainingTimeInTimeslice() == odcore::data::dmcp::ModuleStateMessage::RUNNING) {
        
        Container containerSensor = getKeyValueDataStore().get(automotive::miniature::SensorBoardData::ID());

        if(overtaker.isOvertaking() || overtaker.shouldOvertake(containerSensor)) {

            overtaker.process(containerSensor);

            vehicleControl.setSpeed(overtaker.getDesiredSpeed());
            vehicleControl.setSteeringWheelAngle(overtaker.getDesiredSteering());

        } else {
            Container container = getKeyValueDataStore().get(odcore::data::image::SharedImage::ID());
            laneFollower.process(container);
            
            vehicleControl.setSpeed(laneFollower.getDesiredSpeed());
            vehicleControl.setSteeringWheelAngle(laneFollower.getDesiredSteering());
        }

        Container send(vehicleControl);
        getConference().send(send);

    }

    laneFollower.release();

    return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;

}

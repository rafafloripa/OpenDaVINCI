#include <iostream>

#include "opendavinci/odcore/data/Container.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "automotivedata/GeneratedHeaders_AutomotiveData.h"

#include "Overtaker2.h"

using namespace std;
using namespace odcore::base;
using namespace odcore::base::module;
using namespace odcore::data;
using namespace automotive;

Overtaker2::Overtaker2(int argc, char **argv) :
    TimeTriggeredConferenceClientModule(argc, argv, "Overtaker2")
    {}

Overtaker2::~Overtaker2() {}

void Overtaker2::setUp() {
    // This method will be call automatically _before_ running body().
}

void Overtaker2::tearDown() {
    // This method will be call automatically _after_ return from body().
}

// This method will do the main data processing job.
odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode Overtaker2::body() {

    while (getModuleStateAndWaitForRemainingTimeInTimeslice() == odcore::data::dmcp::ModuleStateMessage::RUNNING) {

        // Create vehicle control data.
        VehicleControl vc;
        
            // Go forward.
            vc.setSpeed(1);
            vc.setSteeringWheelAngle(0);
            

        // Create container for finally sending the data.
        Container c(vc);
        // Send container.
        getConference().send(c);
    }

    return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;
}

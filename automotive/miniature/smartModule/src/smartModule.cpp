#include <iostream>

#include "opendavinci/odcore/data/Container.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "automotivedata/GeneratedHeaders_AutomotiveData.h"

#include "smartModule.h"

//#include "../../lanefollower/include/LaneFollower.h"

using namespace std;
using namespace odcore::base;
using namespace odcore::base::module;
using namespace odcore::data;
using namespace automotive;

smartModule::smartModule(int argc, char **argv) :
    TimeTriggeredConferenceClientModule(argc, argv, "smartModule"),
    laneFollower(argc, argv),
    overtaker(argc, argv)
    {}

/*BigMommaClass {
    BigMommaClass(int, int);

private:
    ThingOne thingOne;
    ThingTwo thingTwo;
};BigMommaClass::BigMommaClass(int numba1, int numba2)
    : thingOne(numba1 + numba2), thingTwo(numba1, numba2) {}*/


smartModule::~smartModule() {}

int getState() {

    int state = 0;

    return state;
}

void smartModule::setUp() {
    // This method will be call automatically _before_ running body().
    laneFollower.runModule();
    //overtaker.runModule();
}

void smartModule::tearDown() {
    // This method will be call automatically _after_ return from body().
    laneFollower.kill();
    //overtaker.kill();
}

bool smartModule::shouldOvertake() {
    return false;
}

// This method will do the main data processing job.
odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode smartModule::body() {

    enum states {InRightLane, InLeftLane, InChangeToLeftLane, InChangeToRightLane};

    //laneFollower.runModule();

    /*while (getModuleStateAndWaitForRemainingTimeInTimeslice() == odcore::data::dmcp::ModuleStateMessage::RUNNING) {


        if(shouldOvertake()) {

        }

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
*/
    return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;
}

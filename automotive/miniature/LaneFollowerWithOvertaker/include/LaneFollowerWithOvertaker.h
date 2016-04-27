#include <vector>

#include "opendavinci/odcore/base/module/TimeTriggeredConferenceClientModule.h"

#include "LaneFollower.h"
#include "Overtaker2.h"

//using namespace std;

/**
 * This class is an example demonstrating how to park a simulated vehicle
 * using OpenDaVINCI's driving dynamics simulation.
 */
class LaneFollowerWithOvertaker : public odcore::base::module::TimeTriggeredConferenceClientModule {
    private:
        /**
         * "Forbidden" copy constructor. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the copy constructor.
         *
         * @param obj Reference to an object of this class.
         */
        LaneFollowerWithOvertaker(const LaneFollowerWithOvertaker &/*obj*/);

        /**
         * "Forbidden" assignment operator. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the assignment operator.
         *
         * @param obj Reference to an object of this class.
         * @return Reference to this instance.
         */
        LaneFollowerWithOvertaker& operator=(const LaneFollowerWithOvertaker &/*obj*/);

    public:

        LaneFollowerWithOvertaker(int argc, char **argv);

        virtual ~LaneFollowerWithOvertaker();

        odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode body();

    private:
        virtual void setUp();

        virtual void tearDown();

        bool shouldOvertake();

        automotive::miniature::LaneFollower laneFollower;
        //Overtaker2 overtaker;
};

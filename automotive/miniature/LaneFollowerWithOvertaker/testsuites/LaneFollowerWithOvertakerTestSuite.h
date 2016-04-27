#ifndef LaneFollowerWithOvertakerTESTSUITE_H_
#define LaneFollowerWithOvertakerTESTSUITE_H_

#include "cxxtest/TestSuite.h"

// Include local header files.
#include "../include/LaneFollowerWithOvertaker.h"

using namespace std;
using namespace odcore::data;

/**
 * This class derives from SensorBoard to allow access to protected methods.
 */
class LaneFollowerWithOvertakerTestling : public LaneFollowerWithOvertaker {
    private:
        LaneFollowerWithOvertakerTestling();
    
    public:
        LaneFollowerWithOvertakerTestling(const int32_t &argc, char **argv) :
            LaneFollowerWithOvertaker(argc, argv) {}

        // Here, you need to add all methods which are protected in LaneFollowerWithOvertaker and which are needed for the test cases.
};

/**
 * The actual testsuite starts here.
 */
class LaneFollowerWithOvertakerTest : public CxxTest::TestSuite {
    private:
        LaneFollowerWithOvertakerTestling *dt;

    public:
        /**
         * This method will be called before each testXYZ-method.
         */
        void setUp() {
            // Prepare the data that would be available from commandline.
            string argv0("LaneFollowerWithOvertaker");
            string argv1("--cid=100");
            int32_t argc = 2;
            char **argv;
            argv = new char*[2];
            argv[0] = const_cast<char*>(argv0.c_str());
            argv[1] = const_cast<char*>(argv1.c_str());

            // Create an instance of sensorboard through SensorBoardTestling which will be deleted in tearDown().
            dt = new LaneFollowerWithOvertakerTestling(argc, argv);
        }

        /**
         * This method will be called after each testXYZ-method.
         */
        void tearDown() {
            delete dt;
            dt = NULL;
        }

        ////////////////////////////////////////////////////////////////////////////////////
        // Below this line the actual testcases are defined.
        ////////////////////////////////////////////////////////////////////////////////////

        void testLaneFollowerWithOvertakerSuccessfullyCreated() {
            TS_ASSERT(dt != NULL);
        }

        ////////////////////////////////////////////////////////////////////////////////////
        // Below this line the necessary constructor for initializing the pointer variables,
        // and the forbidden copy constructor and assignment operator are declared.
        //
        // These functions are normally not changed.
        ////////////////////////////////////////////////////////////////////////////////////

    public:
        /**
         * This constructor is only necessary to initialize the pointer variable.
         */
        LaneFollowerWithOvertakerTest() : dt(NULL) {}

    private:
        /**
         * "Forbidden" copy constructor. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the copy constructor.
         *
         * @param obj Reference to an object of this class.
         */
        LaneFollowerWithOvertakerTest(const LaneFollowerWithOvertakerTest &/*obj*/);

        /**
         * "Forbidden" assignment operator. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the assignment operator.
         *
         * @param obj Reference to an object of this class.
         * @return Reference to this instance.
         */
        LaneFollowerWithOvertakerTest& operator=(const LaneFollowerWithOvertakerTest &/*obj*/);

};

#endif /*LaneFollowerWithOvertakerTESTSUITE_H_*/


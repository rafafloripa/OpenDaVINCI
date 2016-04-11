
#ifndef OVERTAKERTESTSUITE2_H_
#define OVERTAKERTESTSUITE2_H_

#include "cxxtest/TestSuite.h"

// Include local header files.
#include "../include/Overtaker2.h"

using namespace std;
using namespace odcore::data;

/**
 * This class derives from SensorBoard to allow access to protected methods.
 */
class Overtaker2Testling : public Overtaker2{
    private:
        Overtaker2Testling();
    
    public:
        Overtaker2Testling(const int32_t &argc, char **argv) :
            Overtaker2(argc, argv) {}

        // Here, you need to add all methods which are protected in Overtaker2and which are needed for the test cases.
};

/**
 * The actual testsuite starts here.
 */
class Overtaker2Test : public CxxTest::TestSuite {
    private:
        Overtaker2Testling *dt;

    public:
        /**
         * This method will be called before each testXYZ-method.
         */
        void setUp() {
            // Prepare the data that would be available from commandline.
            string argv0("Overtaker2");
            string argv1("--cid=100");
            int32_t argc = 2;
            char **argv;
            argv = new char*[2];
            argv[0] = const_cast<char*>(argv0.c_str());
            argv[1] = const_cast<char*>(argv1.c_str());

            // Create an instance of sensorboard through SensorBoardTestling which will be deleted in tearDown().
            dt = new Overtaker2Testling(argc, argv);
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

        void testOvertaker2SuccessfullyCreated() {
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
        Overtaker2Test() : dt(NULL) {}

    private:
        /**
         * "Forbidden" copy constructor. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the copy constructor.
         *
         * @param obj Reference to an object of this class.
         */
        Overtaker2Test(const Overtaker2Test &/*obj*/);

        /**
         * "Forbidden" assignment operator. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the assignment operator.
         *
         * @param obj Reference to an object of this class.
         * @return Reference to this instance.
         */
        Overtaker2Test& operator=(const Overtaker2Test &/*obj*/);

};

#endif /*Overtaker2TESTSUITE_H_*/


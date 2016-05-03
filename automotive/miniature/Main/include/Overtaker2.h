#include <vector>

#include "opendavinci/odcore/data/Container.h"

using namespace std;
/**
 * This class is a skeleton to send driving commands to Hesperia-light's vehicle driving dynamics simulation.
 */
class Overtaker2 {
    private:
        /**
         * "Forbidden" copy constructor. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the copy constructor.
         *
         * @param obj Reference to an object of this class.
         */
        Overtaker2(const Overtaker2 &/*obj*/);

        /**
         * "Forbidden" assignment operator. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the assignment operator.
         *
         * @param obj Reference to an object of this class.
         * @return Reference to this instance.
         */
        Overtaker2& operator=(const Overtaker2 &/*obj*/);

    public:
        /**
         * Constructor.
         *
         * @param argc Number of command line arguments.
         * @param argv Command line arguments.
         */
        Overtaker2(bool simulation);

        virtual ~Overtaker2();

        void process(odcore::data::Container &containerSensorBoardData);
        double getDesiredSteering();
        double getDesiredSpeed();
        bool isOvertaking();
        bool shouldOvertake(odcore::data::Container &containerSensorBoardData);

    private:

        void moveState();
        void checkSensors(odcore::data::Container &containerSensorBoardData);

        bool sim;
        bool overtaking;
        bool hasOvertaken;

        int32_t ULTRASONIC_FRONT_RIGHT;
        int32_t INFRARED_FRONT_RIGHT;
        int32_t INFRARED_REAR_RIGHT;
        int32_t ULTRASONIC_FRONT_CENTER;
        double OVERTAKING_DISTANCE;

        enum Move{FORWARD, TURN_LEFT, TURN_RIGHT, FOLLOW_LEFT, ADJUST_RIGHT, ADJUST_LEFT, STOP};
        enum Object{SETUP, TRACK_OBJECT, FOUND, NOT_FOUND};

        Move moving;
        Object obj;

        double trackWheelAngle; //debug use to check which angle the wheels are in
        //test values to be compared with sensor values
        double distanceToOvertake; //use this value to see how far away the object to overtake is

        double steering;
        double speed;

};

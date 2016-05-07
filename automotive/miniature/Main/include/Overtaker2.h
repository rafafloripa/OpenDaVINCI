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
        bool shouldOvertake(odcore::data::Container &containerSensorBoardData);

    private:

        void changeToLeftLane();
        void changeToRightLane();
        void checkSensors(odcore::data::Container &containerSensorBoardData);
        bool shouldChangeToRight();

        bool sim;
        bool overtaking;
        bool hasOvertaken;

        int32_t ULTRASONIC_FRONT_RIGHT;
        int32_t INFRARED_FRONT_RIGHT;
        int32_t INFRARED_REAR_RIGHT;
        int32_t ULTRASONIC_FRONT_CENTER;
        double OVERTAKING_DISTANCE;
        double ultrathreshold;
        double irthreshold;
        double steeringLeft;
        double steeringRight;

        enum STATES{InRightLane, InLeftLane, InChangeToLeftLane, InChangeToRightLane};
        STATES states;
        double ultrafrontright, irfr, irrr;
        bool LANEFOLLOW;
        int steeringCounter;

        double trackWheelAngle; //debug use to check which angle the wheels are in
        //test values to be compared with sensor values
        double distanceToOvertake; //use this value to see how far away the object to overtake is

        double steering;
        double speed;

};

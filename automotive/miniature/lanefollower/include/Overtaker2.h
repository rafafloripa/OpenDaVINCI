#include <vector>
#include "opendavinci/odcore/base/module/TimeTriggeredConferenceClientModule.h"

using namespace std;
        /**
         * This class is a skeleton to send driving commands to Hesperia-light's vehicle driving dynamics simulation.
         */                     //odcore::base::module::TimeTriggeredConferenceClientModule 
        class Overtaker2 : public odcore::base::module::TimeTriggeredConferenceClientModule {
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
                Overtaker2();


                virtual ~Overtaker2();

                odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode body();

            private:
                virtual void setUp();

                virtual void tearDown();
        };

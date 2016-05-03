// #include <opendavinci/odcore/base/Service.h>
#include "opendavinci/odcore/data/Container.h"

#include "opendavinci/odcore/wrapper/SharedMemory.h"
#include "automotivedata/GeneratedHeaders_AutomotiveData.h"

#include <opencv/cv.h>

// Concurrency is provided by the class odcore::base::Service.
class LaneFollower {

    /* Making the copy constructor and assignment operator, private. This way they cannot be accessed. */
	private:
		LaneFollower(const LaneFollower &);
		LaneFollower& operator=(const LaneFollower &);

	public:
		LaneFollower(bool debug, bool simulation);
		void process(odcore::data::Container &c);
		double getDesiredSpeed();
		double getDesiredSteering();
		void release();

	protected:
		bool readSharedImage(odcore::data::Container &c);

	private:
        bool m_hasAttachedToSharedImageMemory;
		std::shared_ptr<odcore::wrapper::SharedMemory> m_sharedImageMemory;
		IplImage *m_image;
		bool m_debug;
		bool m_sim;
		CvFont m_font;

		odcore::data::TimeStamp m_previousTime;
		double m_eSum;
		double m_eOld;

		double max_eSum;
		double min_eSum;

		double max_e;
		double min_e;

		double previousSteering;
		double steering;
		double speed;

		bool running;

        void birdEyeTransform();
        void DetectLane();
        void processImage();

};
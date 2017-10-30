#ifndef SUBSYSTEM_H_
#define SUBSYSTEM_H_

namespace DevilLib {
    class SynchronizedLooper {
        public:


    };

    class Loop {
        public:
            virtual void onStart();
            virtual void onLoop();
            virtual void onStop();
    };

    class Subsystem {
        public:
             virtual void stop();
             virtual void zeroSensors();
    };



} /* DevilLib */

#endif

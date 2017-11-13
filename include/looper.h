#ifndef LOOPS_H_
#define LOOPS_H_
#include "subsystem.h"
#include <vector>
class Looper {
    public:
        Looper();

        void addSubsystem(Subsystem* subsystem);

        void run();
    private:
        std::vector<Subsystem*> subsystems;

};

#endif

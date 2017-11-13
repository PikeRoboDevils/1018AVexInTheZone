#include "looper.h"

Looper::Looper(){
}

void Looper::addSubsystem(Subsystem* subsystem) {
    subsystems.push_back(subsystem);
}

void Looper::run() {
    for(Subsystem* subsystem : subsystems) {
        subsystem->loop();
    }
}

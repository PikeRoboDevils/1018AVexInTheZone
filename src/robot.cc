#include "robotbase.h"

void initIO() {

}

void robotInit() {

}

void teleopInit() {

}

void teleopPeriodic() {

}

void autonomousInit() {

}

void autonomousPeriodic() {

}

void disabledInit() {
    for(int i = 0; i < 10; i++) {
        motorSet(i, 0);
    }
}

void disabledPeriodic() {

}

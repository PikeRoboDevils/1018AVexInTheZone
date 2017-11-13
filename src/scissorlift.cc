#include "robotconstants.h"
#include "scissorlift.h"
#include <API.h>

ScissorLift* ScissorLift::instance = 0;

ScissorLift::ScissorLift() {}

void ScissorLift::raiseLeft() {
    motorSet(SL_L_MOTOR_PORT, 127);
}

void ScissorLift::lowerLeft() {
    motorSet(SL_L_MOTOR_PORT, -127);
}

void ScissorLift::stopLeft() {
    motorStop(SL_L_MOTOR_PORT);
}

void ScissorLift::raiseRight() {
    motorSet(SL_R_MOTOR_PORT, -127);
}

void ScissorLift::lowerRight() {
    motorSet(SL_R_MOTOR_PORT, 127);
}

void ScissorLift::stopRight() {
    motorStop(SL_R_MOTOR_PORT);
}

void ScissorLift::raise() {
    raiseRight();
    raiseLeft();
}

void ScissorLift::lower() {
    lowerRight();
    lowerLeft();
}

void ScissorLift::stop() {
    stopLeft();
    stopRight();
}

ScissorLift* ScissorLift::getInstance() {
    if(instance == 0) {
        instance = new ScissorLift();
    }
    return instance;
}

#include "bangBangController.h"
#include <API.h>
#include <math.h>

BangBangController::BangBangController(double minOutput, double maxOutput, double deadband) :
                    minOutput(minOutput),
                    maxOutput(maxOutput),
                    deadband(deadband) {}

void BangBangController::setSetpoint(double setpoint) {
    this->setpoint = setpoint;
}

double BangBangController::calculate(double input) {
    error = setpoint - input;
    if(continuous) {
        if(abs(error) > (maxInput - minInput) / 2) {
            if(error > 0) {
                error = error - maxInput + minInput;
            } else {
                error = error + maxInput - minInput;
            }
        }
    }
    if(abs(error) < deadband) {
        return 0;
    } else {
        return error < 0 ? minInput : maxInput;
    }
}

void BangBangController::setContinuous(bool continuous) {
    this->continuous = continuous;
}

void BangBangController::setMinInput(double minInput) {
    this->minInput = minInput;
}

void BangBangController::setMaxInput(double maxInput) {
    this->maxInput = maxInput;
}

void BangBangController::setMinOutput(double minOutput) {
    this->minOutput = minOutput;
}

void BangBangController::setMaxOutput(double maxOutput) {
    this->maxOutput = maxOutput;
}

void BangBangController::setDeadband(double deadband) {
    this->deadband = deadband;
}

double BangBangController::getError() {
    return this->error;
}

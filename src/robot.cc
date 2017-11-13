#include "robotbase.h"
#include "looper.h"
#include "drivetrain.h"
#include "scissorlift.h"
#include "util.h"
//Looper enabledLooper;
Drivetrain* drivetrain;
ScissorLift* scissorLift;

int i;
void initIO() {

}

void robotInit() {
    setTeamName("1018A");
    watchdogInit();
    lcdInit(uart1);
    lcdClear(uart1);
    lcdSetBacklight(uart1, true);
    drivetrain = Drivetrain::getInstance();
    scissorLift = ScissorLift::getInstance();
    lcdSetText(uart1, 1, "robotinit");
}

void robotPeriodic() {
    lcdSetText(uart1, 2, "robotperiodic:");
}

void teleopInit() {
    i = 0;
    lcdSetText(uart1, 1, "teleopinit");
}

void teleopPeriodic() {
    lcdSetText(uart1, 1, "teleopperiodic:");
    int power = joystickGetAnalog(1, 3);
    int turn = -joystickGetAnalog(1, 1);
    drivetrain->arcadeDrive(power, turn);
    //motorSet(10, joystickGetAnalog(1, 2));
/*
    if(joystickGetDigital(1, 8, JOY_UP)) {
        scissorLift->raise();
    } else if(joystickGetDigital(1, 8, JOY_DOWN)) {
        scissorLift->lower();
    } else {
        if(joystickGetDigital(1, 6, JOY_UP)) {
            scissorLift->raiseRight();
        } else if(joystickGetDigital(1, 6, JOY_DOWN)) {
            scissorLift->lowerRight();
        } else {
            scissorLift->stopRight();
        }
        if(joystickGetDigital(1, 5, JOY_UP)) {
            scissorLift->raiseLeft();
        } else if(joystickGetDigital(1, 5, JOY_DOWN)) {
            scissorLift->lowerLeft();
        } else {
            scissorLift->stopLeft();
        }
    }*/
    //scissorLift->setSpeed(deadband(joystickGetAnalog(1, 2), 10));
    //enabledLooper.run();

}

void autonomousInit() {
    i = 0;
    lcdSetText(uart1, 1, "autoinit");
}

void autonomousPeriodic() {
    lcdSetText(uart1, 1, "autoperiodic:");
}

void disabledInit() {
    i = 0;
    lcdSetText(uart1, 1, "disabledinit");
}

void disabledPeriodic() {
    lcdSetText(uart1, 1, "disabledperiodic:");

}

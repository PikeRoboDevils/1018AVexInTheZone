#include "robotbase.h"
#include "drivetrain.h"
#include "util.h"

Drivetrain* drivetrain;
int i;
void initIO() {

}

void robotInit() {
    lcdInit(uart1);
    lcdClear(uart1);
    lcdSetBacklight(uart1, true);
    drivetrain = Drivetrain::getInstance();
    lcdSetText(uart1, 1, "robotinit");
    delay(500);
}

void robotPeriodic() {
    lcdSetText(uart1, 2, "robotperiodic:");
}

void teleopInit() {
    i = 0;
    lcdSetText(uart1, 1, "teleopinit");
    delay(500);
}

void teleopPeriodic() {
    lcdSetText(uart1, 1, "teleopperiodic:");
    int power = joystickGetAnalog(1, 3);
    int turn = -joystickGetAnalog(1, 1);
    drivetrain->arcadeDrive(power, turn);

}

void autonomousInit() {
    i = 0;
    lcdSetText(uart1, 1, "autoinit");
    delay(500);
}

void autonomousPeriodic() {
    lcdSetText(uart1, 1, "autoperiodic:");
}

void disabledInit() {
    i = 0;
    lcdSetText(uart1, 1, "disabledinit");
    delay(500);
}

void disabledPeriodic() {
    lcdSetText(uart1, 1, "disabledperiodic:");

}

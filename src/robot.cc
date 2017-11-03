#include "robotbase.h"
#include "drivetrain.h"

Drivetrain* drivetrain;

void initIO() {

}

void robotInit() {
    drivetrain = Drivetrain::getInstance();
}

void robotPeriodic() {
    
}

void teleopInit() {

}

void teleopPeriodic() {
    int power = joystickGetAnalog(1, 3);
    int turn = joystickGetAnalog(1, 2);
    drivetrain->arcadeDrive(power, turn);
}

void autonomousInit() {

}

void autonomousPeriodic() {

}

void disabledInit() {

}

void disabledPeriodic() {

}

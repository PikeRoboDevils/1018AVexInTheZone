#include "drivetrain.h"
#include <API.h>

unsigned char RA_MOTOR = 2;
unsigned char RB_MOTOR = 4;
unsigned char LA_MOTOR = 3;
unsigned char LB_MOTOR = 5;

void Drivetrain::setLeftRightMotors(int left, int right) {
    motorSet(RA_MOTOR, right);
    motorSet(RB_MOTOR, right);
    motorSet(LA_MOTOR, left);
    motorSet(LB_MOTOR, left);
}

void Drivetrain::arcadeDrive(int power, int turn) {
    int left = power - turn;
    int right = power + turn;
    setLeftRightMotors(left, right);
}

void setLeftRightMotors(int left, int right) {
    motorSet(RA_MOTOR, right);
    motorSet(RB_MOTOR, right);
    motorSet(LA_MOTOR, -left);
    motorSet(LB_MOTOR, -left);
}

void arcadeDrive(int power, int turn) {
    int left = power - turn;
    int right = power + turn;
    setLeftRightMotors(left, right);
}

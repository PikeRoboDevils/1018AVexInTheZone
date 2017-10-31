#ifndef DRIVETRAIN_H_
#define DRIVETRAIN_H_

class Drivetrain {
    public:
        void setLeftRightMotors(int left, int right);

        void arcadeDrive(int power, int turn);
};

void setLeftRightMotors(int left, int right);

void arcadeDrive(int power, int turn);

#endif

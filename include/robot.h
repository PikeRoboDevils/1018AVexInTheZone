#ifndef ROBOT_H_
#define ROBOT_H_

bool firstTimeTeleop = true;
bool firstTimeAuto = true;
bool firstTimeDisabled = true;

enum Mode { DISABLED = 0,
            TELEOP = 1,
            AUTONOMOUS = 2
        };

enum Mode previousMode = DISABLED;

void robotInit();

void robotPeriodic();

void initIO();

void teleopInit();

void teleopPeriodic();

void autonomousInit();

void autonomousPeriodic();

void disabledInit();

void disabledPeriodic();

#endif

/**
 * @file drivetrain.cc
 * @brief Implementation of Drivetrain singleton class functions
 *
 * Copyright (C) 2017-2018  Pike RoboDevils
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "robotconstants.h"
#include "drivetrain.h"
#include <API.h>
#include "util.h"

Drivetrain* Drivetrain::instance = 0;

Drivetrain::Drivetrain() {}

void Drivetrain::setLeftRightMotors(int left, int right) {
    motorSet(DT_LA_MOTOR_PORT, -left);
    motorSet(DT_LB_MOTOR_PORT, -left);
    motorSet(DT_RA_MOTOR_PORT, right);
    motorSet(DT_RB_MOTOR_PORT, right);
}

void Drivetrain::arcadeDrive(int power, int turn) {
    power = deadband(power, 10);
    turn = deadband(turn, 10);
    int left = power - turn;
    int right = power + turn;
    setLeftRightMotors(left, right);
}

Drivetrain* Drivetrain::getInstance() {
    if(instance == 0) {
        instance = new Drivetrain();
    }
    return instance;
}

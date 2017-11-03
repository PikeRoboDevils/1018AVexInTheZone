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

#include "drivetrain.h"
#include <API.h>

unsigned char RA_MOTOR = 2;
unsigned char RB_MOTOR = 4;
unsigned char LA_MOTOR = 3;
unsigned char LB_MOTOR = 5;

Drivetrain* Drivetrain::instance = 0;

Drivetrain::Drivetrain() {

}

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

Drivetrain* Drivetrain::getInstance() {
    if(instance == 0) {
        instance = new Drivetrain();
    }
    return instance;
}

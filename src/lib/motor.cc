/**
 * @file motors.cpp
 * @brief Source file for motor abstraction
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

#include "lib/motor.h"

namespace DevilLib {
    Motor::Motor(unsigned char channel, bool inverted) {
        this->channel = channel;
        this->invertedMultiplier = (int)(inverted ? -1 : 1);
    }

    void Motor::set(int speed) {
        motorSet(channel, speed*invertedMultiplier);
    }

    void Motor::stop() {
        set(0);
    }

    int Motor::get() {
        return motorGet(channel);
    }

}  /* DevilLib */

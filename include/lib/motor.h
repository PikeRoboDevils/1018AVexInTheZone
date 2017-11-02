/**
 * @file motors.hpp
 * @brief Hardware abstraction of motors
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

#ifndef DEVILLIB_ACTUATORS_MOTOR_H_
#define DEVILLIB_ACTUATORS_MOTOR_H_

#include <API.h>
namespace DevilLib {

    /**
     * Motor class
     */
    class Motor {
        public:
            /**
            * Motor constructor
            * @param channel  The port the motor is connected to (1 - 10)
            * @param inverted Invert the direction of the motor
            */
            Motor(unsigned char channel, bool inverted);

            /**
            * Sets the speed of the motor
            * @param speed The new speed; -127 is full reverse and 127 is full forward, with 0 being off
            */
            void set(int speed);

            /**
            * Stops the motor, equivalent to calling set() with an argument of zero.
            */
            void stop();

            /**
             * Gets the last set speed of the motor
             * @return The speed last sent to this channel; -127 is full reverse and 127 is full forward, with 0 being off
             */
            int get();
        private:
            unsigned char channel;
            int invertedMultiplier;
    };
}  /* DevilLib */

#endif /* end of include guard: DEVILLIB_ACTUATORS_MOTOR_H_ */

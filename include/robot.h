/**
 * @file robot.h
 * @brief FRC style IterativeRobot function
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

#ifndef ROBOT_H_
#define ROBOT_H_

/**
 * PROS initializeIO(); function.
 */
void initIO();

/**
* Called once when the robot is turned on.
*/
void robotInit();

/**
* Called with the main loops while the robot is on.
*/
void robotPeriodic();

/**
 * Called once when the robot is enabled for Teleoperated mode (Operator control).
 */
void teleopInit();

/**
 * Called constantly while the robot is enabled for teleoperated mode.
 */
void teleopPeriodic();

/**
 * Called once when the robot is enabled for Autonomous mode.
 */
void autonomousInit();

/**
 * Called constantly while the robot is enabled for autonomous mode.
 */
void autonomousPeriodic();

/**
 * Called once when the robot is disabled (tele or auto, doesn't matter).
 */
void disabledInit();

/**
 * Called constantly when the robot is disabled.
 */
void disabledPeriodic();

#endif

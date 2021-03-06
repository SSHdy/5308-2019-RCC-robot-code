/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// constexpr int kLeftMotor = 1;
// constexpr int kRightMotor = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// constexpr int kRangeFinderPort = 1;
// constexpr int kRangeFinderModule = 1;

constexpr int kPolit = 0;

/* Drive subsystem */
constexpr int kCsmLeftFrot = 0;
constexpr int kCsmLeftMidd = 0;
constexpr int kCsmLeftBack = 0;

constexpr int kCsmRghtFrot = 0;
constexpr int kCsmRghtMidd = 0;
constexpr int kCsmRghtBack = 0;


/* Cargo subsystem */
constexpr int kCsmArmMain = 0;
constexpr int kCsmArmSub  = 0;

constexpr int kCsmIntakeMac = 0;
constexpr int kVctIntakeBtm = 0;

/* Pneumatics subsystem */
constexpr int kPCMPort = 0;

constexpr int kHatchSolF = 0;
constexpr int kHatchSolB = 0;

constexpr int kEleF = 0;
constexpr int kEleB = 0;
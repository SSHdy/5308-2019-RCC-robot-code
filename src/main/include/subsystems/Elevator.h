/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>

#include <frc/WPILib.h>

#include "RobotMap.h"

class Elevator : public frc::Subsystem {
 private:

  std::shared_ptr<frc::DoubleSolenoid> sol_ele;

  std::shared_ptr<frc::Joystick> polit;

 public:
  Elevator();
  void InitDefaultCommand() override;
  void Periodic() override;
};

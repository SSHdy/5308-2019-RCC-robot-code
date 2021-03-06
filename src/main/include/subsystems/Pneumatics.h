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

class Pneumatics : public frc::Subsystem {
 private:

 std::shared_ptr<frc::Compressor> compressor;

 public:
  Pneumatics();
  void CompreesorEnable();
  void CompressorDisable();
  void InitDefaultCommand() override;
};

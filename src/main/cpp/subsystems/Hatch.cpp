/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Hatch.h"

Hatch::Hatch() : Subsystem("Hatch") 
{
  sol_hatch.reset(new frc::DoubleSolenoid(kPCMPort, kHatchSolF, kHatchSolB));
  polit.reset(new frc::Joystick(kPolit));
}

void Hatch::InitDefaultCommand()
{
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

void Hatch::solReverse()
{
  sol_hatch -> Set( (frc::DoubleSolenoid::Value) (3 - sol_hatch->Get())); 
  printf("hatch solenoid change to ");
  printf(sol_hatch->Get()-1?"Forward\n":"Reversed\n");
}

void Hatch::Periodic()
{
  if(polit->GetRawButtonPressed(3))
  {
    solReverse(); 
  }
}
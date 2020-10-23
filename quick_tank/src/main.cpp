/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       robots20                                                  */
/*    Created:      Wed Oct 21 2020                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

#include "pragma.h"

void left_set(int pwr)
{
  left_back.spin(vex::directionType::fwd, pwr, vex::velocityUnits::pct);
  left_front.spin(vex::directionType::fwd, pwr, vex::velocityUnits::pct);
}

void right_set(int pwr)
{
  right_back.spin(vex::directionType::fwd, pwr, vex::velocityUnits::pct);
  right_front.spin(vex::directionType::fwd, pwr, vex::velocityUnits::pct);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
  while (true)
  {
    left_set(ctlr.Axis3.value());
    right_set(ctlr.Axis2.value());

    vex::task::sleep(20);
  }
}

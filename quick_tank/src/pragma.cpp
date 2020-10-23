#include "vex.h"

vex::brain Brain;

vex::motor left_back   = vex::motor(PORT8, false) ;
vex::motor left_front  = vex::motor(PORT9, true ) ;
vex::motor right_back  = vex::motor(PORT4, true ) ;
vex::motor right_front = vex::motor(PORT5, false) ;

vex::controller ctlr;
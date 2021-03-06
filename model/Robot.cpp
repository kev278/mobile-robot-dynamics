/*
Implementation of Robot Class
*/
#ifndef _ROBOTCPP_
#define _ROBOTCPP_

#include "Robot.h"

// Initializer list for all robot parameters
Robot::Robot(std::vector<double> modelParameters)
: wheelToCenter(modelParameters[0]), wheelRadius(modelParameters[1]), gearBoxReduction(modelParameters[2]),
  Kv(modelParameters[3]), R(modelParameters[4]), M(modelParameters[5]), J(modelParameters[6]),
  Bv(modelParameters[7]), Bvn(modelParameters[8]), Bw(modelParameters[9]), Cv(modelParameters[10]),
  Cvn(modelParameters[11]), Cw(modelParameters[12])
  {

  }

  #endif //_ROBOTCPP_
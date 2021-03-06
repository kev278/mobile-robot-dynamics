/*
Robot class with all robot model parameters
A single parametric constructor for data memebers
*/
#ifndef _ROBOT_
#define _ROBOT_

#include <vector>

class Robot
{
    public:
        // Default constructor
        Robot() = default;
        // Parametric constructor to initialize robot parameters
        Robot(std::vector<double> modelParameters);

    protected:
        double wheelToCenter;
        double wheelRadius;
        double gearBoxReduction;
        /*
        Dynamic Model and Motor Parameters
        Check the report for description of each parameter
        */
        double Kv;
        double R;
        double M;
        double J;
        double Bv;
        double Bvn;
        double Bw;
        double Cv;
        double Cvn;
        double Cw;
};

#include "Robot.cpp"

#endif //_ROBOT_

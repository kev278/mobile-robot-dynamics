/*
Robot class with all robot model parameters
A single parametric constructor for data memebers
*/
#ifndef _ROBOT_
#define _ROBOT_

#include <vector>

template <class T>
class Robot
{
    public:
        // Parametric Constructor to initialize robot parameters
        Robot(std::vector<T> modelParameters);

    private:
        T wheelToCenter;
        T wheelRadius;
        T gearBoxReduction;
        /*
        Dynamic Model and Motor Parameters
        Check the report for description of each parameter
        */
        T Kv;
        T R;
        T M;
        T J;
        T Bv;
        T Bvn;
        T Bw;
        T Cv;
        T Cvn;
        T Cw;
};

#endif

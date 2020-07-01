#ifndef SIMPLEMC_H
#define SIMPLEMC_H
#include "PayOff2.h"
#include "Random1.h"
#include <cmath>


double SimpleMonteCarlo2(const PayOff& thePayOff, double Expiry,double Spot, double Vol, double r, unsigned long NumberOfPaths)
{
    //to save computational time
    double moved_Spot = Spot*exp((r - 0.5*Vol*Vol)*Expiry);
    double sum = 0;

    for(int i = 0; i < NumberOfPaths; i++)
    {
        // z ~ Normal(0, 1)
        double z = GetOneGaussianByBoxMuller();
        double Spot_at_Expiry = moved_Spot*exp(Vol*sqrt(Expiry)*z);
        //calculate payoff, execute when spot > strike
        sum += thePayOff(Spot_at_Expiry);
    }
    return exp(-r*Expiry)*(sum/NumberOfPaths);
}

#endif
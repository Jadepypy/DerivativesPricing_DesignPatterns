#ifndef SIMPLEMC4_H
#define SIMPLEMC4_H
#include <cmath>
#include "Vanilla1.h"
#include "Parameters.h"
#include "Random1.h"




double SimpleMonteCarlo3(const VanillaOption& theOption, double Spot, const Parameters& Vol, const Parameters& r, unsigned long NumberOfPaths)
{
    double Expiry = theOption.GetExpiry();
    
    //to save computational time
    double variance = Vol.IntegralSquare(0, Expiry);
    double rootVariance = sqrt(variance);
    double itoCorrection = 0.5*variance;
    double moved_Spot = Spot*exp(r.Integral(0, Expiry) + itoCorrection);
    double sum = 0;

    for(unsigned long i = 0; i < NumberOfPaths; i++)
    {
        // z ~ Normal(0, 1)
        double z = GetOneGaussianByBoxMuller();
        double Spot_at_Expiry = moved_Spot*exp(rootVariance*z);
        //calculate payoff, execute when spot > strike
        sum += theOption.OptionPayOff(Spot_at_Expiry);
    }
    return exp(-r.Integral(0, Expiry))*(sum/NumberOfPaths);
}

#endif
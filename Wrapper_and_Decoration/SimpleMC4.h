#ifndef SIMPLEMC4_H
#define SIMPLEMC4_H
#include <cmath>
#include "Vanilla1.h"
#include "Parameters.h"
#include "Random1.h"
#include "MCStatistics.h"
#include "Wrapper.h"
#include "ConvergenceTable.h"




void SimpleMonteCarlo3(const VanillaOption& theOption, double Spot, const Parameters& Vol, 
    const Parameters& r, unsigned long NumberOfPaths, StatisticsMC& gatherer)
{
    double Expiry = theOption.GetExpiry();
    
    //to save computational time
    double variance = Vol.IntegralSquare(0, Expiry);
    double rootVariance = sqrt(variance);
    double itoCorrection = 0.5*variance;
    double moved_Spot = Spot*exp(r.Integral(0, Expiry) + itoCorrection);
    double discounting = exp(-r.Integral(0, Expiry));
    
    for(unsigned long i = 0; i < NumberOfPaths; i++)
    {
        // z ~ Normal(0, 1)
        double z = GetOneGaussianByBoxMuller();
        double Spot_at_Expiry = moved_Spot*exp(rootVariance*z);
        //calculate payoff, execute when spot > strike
        double thisPayOff = theOption.OptionPayOff(Spot_at_Expiry);
        gatherer.DumpOneResult(thisPayOff*discounting);
    }
    return;
}

#endif
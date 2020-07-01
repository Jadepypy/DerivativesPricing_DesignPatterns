/*
 uses source files
 AntiThetic.cpp
 Arrays.cpp,
 ConvergenceTable.cpp,
 ExoticBSEngine.cpp
 ExoticEngine.cpp
 MCStatistics.cpp
 Normals.cpp
 Parameters.cpp,
 ParkMiller.cpp,
 PathDependent.cpp
 PathDependentAsian.cpp
 PayOff3.cpp,
 PayOffBridge.cpp,
 Random2.cpp,
 */

#include "Parameters.h"
#include "MCStatistics.h"
#include "ConvergenceTable.h"
#include "AntiThetic.h"
#include "ParkMiller.h"
#include "PayOff3.h"
#include "iostream"

#include "PathDependentAsian.h"
#include "ExoticBSEngine.h"

using namespace std;

int main()
{
    
    double Expiry;
    double Strike;
    double Spot;
    double Vol;
    double r;
    double d;
    unsigned long NumberOfPaths;
    unsigned NumberOfDates; 
    
    cout << "\nEnter expiry\n";
    cin >> Expiry;
    
    cout << "\nStrike\n";
    cin >> Strike;
    
    cout << "\nEnter spot\n";
    cin >> Spot;
    
    cout << "\nEnter vol\n";
    cin >> Vol;
    
    cout << "\nr\n";
    cin >> r;
    
    cout << "\nd\n";
    cin >> d;
    
    cout << "Number of dates\n";
    cin >> NumberOfDates;
    
    cout << "\nNumber of paths\n";
    cin >> NumberOfPaths;
    
    //Bridge Pattern, memory handling part separated
    PayOffCall thePayOff(Strike);
    
    //customized array
    MJArray times(NumberOfDates);
    for (unsigned long i=0; i < NumberOfDates; i++) //uniform spacing of time
        times[i] = (i+1.0)*Expiry/NumberOfDates;
    
    //Bridge Pattern
    ParametersConstant VolParam(Vol); 
    ParametersConstant rParam(r);
    ParametersConstant dParam(d);
    
    PathDependentAsian theOption(times, Expiry, thePayOff);
    
    //Decorator pattern: add functionality to StatisticsMC (with wrapper) without changing interface
    //Different Statistics Gatherer "wrapped" in ConvergenceTable class
    StatisticsMean gatherer;
    ConvergenceTable gathererTwo(gatherer);
    
    //Park Miller: linear congruential generator(minimal standard)
    RandomParkMiller generator(NumberOfDates);
    //Decorator Pattern: (Differently implemented) generators wrapped in Antithetic class
    //cause simulations to converge faster
    AntiThetic GenTwo(generator);
    
    ExoticBSEngine theEngine(theOption, rParam, dParam,
                             VolParam, GenTwo, Spot);
    
    theEngine.DoSimulation(gathererTwo, NumberOfPaths);
    
    vector<vector<double> > results =
    gathererTwo.GetResultsSoFar();
    
    cout <<"\nFor the Asian call price the results are \n";
    
    {
        for (unsigned long i=0; i < results.size(); i++)
        {
            for (unsigned long j=0; j < results[i].size(); j++)
                cout << results[i][j] << " ";
            cout << "\n";
        }
    }
    
    double tmp;
    cin >> tmp;
    
    
    
    return 0;
}

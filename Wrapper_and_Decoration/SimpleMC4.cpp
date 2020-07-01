#include <iostream>
#include "SimpleMC4.h"
#include "Random1.h"


using namespace std;

int main()
{
    double Expiry;
    double Strike;
    double Spot;
    double Vol;
    double r;
    unsigned long NumberOfPaths;
    
    cout << "\nEnter expiry\n";
    cin >> Expiry;
    
    cout << "\nEnter strike\n";
    cin >> Strike;
    
    cout << "\nEnter spot\n";
    cin >> Spot;
    
    cout << "\nEnter vol\n";
    cin >> Vol;
    ParametersConstant VolParam(Vol);
    
    cout << "\nEnter r\n";
    cin >> r;
    ParametersConstant rParam(r);
    
    cout << "\nEnter number of paths\n";
    cin >> NumberOfPaths;
    
    unsigned long optionType;
    
    cout << "\nenter 0 for call, otherwise put.";
    cin >> optionType;
    
    //PayOff* thePayOffPtr;
    
    PayOffCall thePayOff(Strike);
    VanillaOption theOption(thePayOff, Expiry);
    
    StatisticsMean gatherer;
    //decorator pattern, StatisticsMean Object is wrapped
    ConvergenceTable gathererTwo(gatherer);
    
    
    SimpleMonteCarlo3(theOption, Spot, VolParam, rParam, NumberOfPaths, gathererTwo);
    
    vector<vector <double>> results = gatherer.GetResultsSoFar();
    
    //cout << "\nthe price is " << result << "\n";
    //double tmp;
    //cin >> tmp;
    
    //delete thePayOffPtr;
}

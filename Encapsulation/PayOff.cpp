#include "PayOff.h" //"" used when including local file, system file uses <>
#include "Random1.h"
#include <iostream>
#include <algorithm>
using namespace std;

PayOff :: PayOff(double Strike_, OptionType TheOptionType_)
: Strike(Strike_), TheOptionType (TheOptionType_) //constructor initialization list (efficient)
{}

double PayOff :: operator()(double Spot) const
{
    switch(TheOptionType)
    {
    case call:
        return max(0.0 , Spot - Strike);
    case put:
        return max(0.0 , Strike - Spot);
    default:
        cout << "No such option.";
    }
} 
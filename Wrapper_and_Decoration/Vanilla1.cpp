#include "Vanilla1.h"

//pass by refernce
VanillaOption::VanillaOption(const PayOffBridge& thePayOff_, double Expiry_) : Expiry(Expiry_), thePayOff(thePayOff_)
{
    //a reference uses a ‘.' to access its members
    //thePayOffPtr = thePayOff_.clone();
}
double VanillaOption :: GetExpiry() const
{
    return Expiry;
}
//copy constructor
/*VanillaOption :: VanillaOption(const VanillaOption& original)
{
    Expiry = original.Expiry;
    thePayOffPtr = original.thePayOffPtr->clone();
}*/
double VanillaOption :: OptionPayOff(double Spot) const
{
    // double operator()(double Spot) const;
    return thePayOff(Spot);
}
/*
VanillaOption& VanillaOption :: operator=(const VanillaOption& original)
{
    if(this != &original)
    {
        Expiry = orininal.Expiry;
        delete thePayOffPtr;
        thePayOffPtr = original.thePayOffPtr->clone();
    }
    return *this; //dereference pointer this 
}
VanillaOption::~VanillaOption()
{
    delete thePayOffPtr;
}
*/


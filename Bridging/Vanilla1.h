#ifndef VANILLAOPTION_H
#define VANILLAOPTION_H
#include "PayOff3.h"
#include "PayOffBridge.h"


class VanillaOption
{
public:
    VanillaOption(const PayOffBridge& thePayOff_, double Expiry_);
    //VanillaOption(const VanillaOption& original);
    //VanillaOption& operator=(const VanillaOption& original);
   // ~VanillaOption();

    double GetExpiry() const;
    double OptionPayOff(double Spot) const;

private:
    double Expiry;
    PayOffBridge thePayOff;
};

#endif // VANILLAOPTION_H

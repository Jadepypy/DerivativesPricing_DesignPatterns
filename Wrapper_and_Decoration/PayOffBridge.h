#ifndef PAYOFFBRIDGE_H
#define PAYOFFBRIDGE_H
#include "PayOff3.h"

class PayOffBridge
{
public:
    PayOffBridge(const PayOffBridge& original);
    //bridge pattern, reference to implementation class
    PayOffBridge(const PayOff& innerPayOff);
    inline double operator()(double Spot) const;
    ~PayOffBridge();
    PayOffBridge& operator=(const PayOffBridge& original);
private:
    PayOff* thePayOffPtr;
    
};
inline double PayOffBridge :: operator()(double Spot) const
{
    return thePayOffPtr->operator()(Spot);
}


#endif // PAYOFF2_H

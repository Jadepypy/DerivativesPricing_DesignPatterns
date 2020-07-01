#include "PayOff3.h"
#include "PayOffBridge.h"
#include <iostream>
#include <algorithm>
using namespace std;


PayOffCall::PayOffCall(double Strike_) : Strike(Strike_)
{
}
double PayOffCall::operator()(double Spot) const
{
    return max(Spot - Strike, 0.0);
}
double PayOffPut::operator()(double Spot) const
{
    return max(Strike-Spot, 0.0);
}
PayOffPut::PayOffPut(double Strike_) : Strike(Strike_)
{
}
PayOff* :: PayOffCall ::clone() const
{
    //call to the copy constructor
    return new PayOffCall(*this);
}
PayOff* :: PayOffPut ::clone() const
{
    return new PayOffPut(*this);
}


#include "PayOffBridge.h"
#include <iostream>
#include <algorithm>
using namespace std;


PayOffBridge :: PayOffBridge(const PayOffBridge& original)
{
    thePayOffPtr = original.thePayOffPtr->clone();
}
 //bridge pattern, reference to implementation class
PayOffBridge :: PayOffBridge(const PayOff& innerPayOff)
{
    thePayOffPtr  = innerPayOff.clone();
}
PayOffBridge :: ~PayOffBridge()
{
    delete thePayOffPtr;
}
PayOffBridge& PayOffBridge :: operator=(const PayOffBridge& original)
{
    if(this != &original)
    {
        //avoid memory leak
        delete thePayOffPtr;
        thePayOffPtr = original.thePayOffPtr->clone();
    }
    return *this;
}


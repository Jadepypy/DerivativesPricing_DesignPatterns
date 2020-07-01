#include "PayOff.h"
#include "Random1.h"
#include <iostream>
#include <cmath>
using namespace std;

double SimpleMonteCarlo(double Expiry,PayOff &ThePayOff, double Spot, double Vol, double r, unsigned long NumberOfPaths)
{
    //to save computational time
    double moved_Spot = Spot*exp((r - 0.5*Vol*Vol)*Expiry);
    double sum = 0;

    for(int i = 0; i < NumberOfPaths; i++)
    {
        // z ~ Normal(0, 1)
        double z = GetOneGaussianByBoxMuller();
        double Spot_at_Expiry = moved_Spot*exp(Vol*sqrt(Expiry)*z);
        //calculate payoff, execute when spot > strike
        sum += ThePayOff(Spot_at_Expiry);
    }
    return exp(-r*Expiry)*(sum/NumberOfPaths);
}
int main()
{
    double S0 = 100;       //資產價格
    double K = 100 ;       //履約價
    double r = 0.01 ;      //無風險利率
    double Tt = 10;     //時間
    double vol = 0.1;     //波動度
    unsigned long n = 1000;   //模擬次數
    PayOff ThePayOff(K, PayOff :: put);
    double result = SimpleMonteCarlo(Tt, ThePayOff, S0, vol, r, n);
    cout << "The price is " << result << "\n"; 
    return 0;
}
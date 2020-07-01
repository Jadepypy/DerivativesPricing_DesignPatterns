#include <iostream>
#include <cmath>
using namespace std;

double GetOneGaussianByBoxMuller()
{
    double result = 0;
    double x;
    double y;
    double sizeSquared;
    do
    {
        x = 2.0*rand()/static_cast<double>(RAND_MAX) - 1;
        y = 2.0*rand()/static_cast<double>(RAND_MAX) - 1;
        sizeSquared = x*x + y*y;
    } while (sizeSquared >= 1.0);
    result = x*sqrt(-2 * log(sizeSquared)/sizeSquared);

    return result;
    
}


double SimpleMonteCarlo(double Expiry,double Strike, double Spot, double Vol, double r, unsigned long NumberOfPaths)
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
        if(Spot_at_Expiry - Strike > 0)
            sum += Spot_at_Expiry - Strike;
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
    double result = SimpleMonteCarlo(Tt,K, S0, vol, r, n);
    cout << "The price is " << result << "\n"; 
    return 0;
}
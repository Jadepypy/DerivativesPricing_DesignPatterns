#include "MCStatistics.h"
using namespace std;

//To specify an unsigned type, use either the u or U suffix. To specify a long type, use either the l or L suffix.
StatisticsMean :: StatisticsMean() : RunningSum(0.0), PathsDone(0UL)
{
    
}
void StatisticsMean :: DumpOneResult(double result)
{
    PathsDone++;
    RunningSum += result;
}
vector<vector<double>> StatisticsMean :: GetResultsSoFar() const
{
    vector<vector<double>> Results(1);
    Results[0].resize(1);
    Results[0][0] = RunningSum/PathsDone;
    
    return Results;
}
StatisticsMC* StatisticsMean :: clone() const
{
    return new StatisticsMean(*this);
}
    
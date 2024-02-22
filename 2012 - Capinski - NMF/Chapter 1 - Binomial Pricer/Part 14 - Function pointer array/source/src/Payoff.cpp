#include "Payoff.hpp"

double CallPayoff(double arr[])
{
    if (arr[0]>arr[1]) return arr[0]-arr[1];
    return 0.0;
}

double PutPayoff(double arr[])
{
    return (arr[1]>arr[0]) ? arr[1]-arr[0] : 0.0;
}

double DigitalCallPayoff(double arr[])
{
    return (arr[1]<arr[0]) ? 1.0 : 0.0;
}

double DigitalPutPayoff(double arr[])
{
    return (arr[1]>arr[0]) ? 1.0 : 0.0;
}

// (arr[0],arr[1],arr[2]) = (z,K1,K2)
double DoubleDigitalPayoff(double arr[])
{
    return (arr[0] > arr[1] || arr[0] < arr[2]) ? 1.0 : 0.0;
}

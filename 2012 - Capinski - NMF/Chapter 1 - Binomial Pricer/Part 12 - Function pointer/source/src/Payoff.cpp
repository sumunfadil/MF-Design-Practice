#include "Payoff.hpp"

double CallPayoff(double z, double K)
{
    if (z>K) return z-K;
    return 0.0;
}

double PutPayoff(double z, double K)
{
    return (K>z) ? K-z : 0.0;
}

double DigitalCallPayoff(double z, double K)
{
    return (K<z) ? 1.0 : 0.0;
}

double DigitalPutPayoff(double z, double K)
{
    return (K>z) ? 1.0 : 0.0;
}
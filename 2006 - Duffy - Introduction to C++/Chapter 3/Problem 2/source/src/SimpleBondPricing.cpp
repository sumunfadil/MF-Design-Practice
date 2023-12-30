# include "SimpleBondPricing.hpp"
#include <cassert>

double Chapter3CPPBook::power(double d, long n)
{
    if (n == 0) return 1.0;
    if (n == 1) return d;

    double result = d;
    for (long j = 1; j < n; j++)
    {
        result *= d;
    }
    return result;
}

/*
Future values
*/

// Future value of sum of money invested today paid once per year
double Chapter3CPPBook::FutureValue(double P0, long nPeriods, double r)
{
    double factor = 1.0 + r;
    return P0 * Chapter3CPPBook::power(factor, nPeriods);
}

// Future value of sum of money invested today paid m times per year
// r is annual interest rate
double Chapter3CPPBook::FutureValue(double P0, long nPeriods, double r, long m)
{
    double factor = 1.0 + (r / m);
    return P0 * Chapter3CPPBook::power(factor, m * nPeriods);
}

// Future value of sum of money invested today with continuous compounding
// limit as m goes to infinity
double Chapter3CPPBook::FutureValueContinuous(double P0, long nPeriods, double r)
{
    return P0 * exp(r * nPeriods);
}

// Future value of an ordinary annuity
double Chapter3CPPBook::OrdinaryAnnuity(double A, long nPeriods, double r)
{
    double factor = 1.0 + r;
    return A * (Chapter3CPPBook::power(factor, nPeriods) - 1) / r;
}

/*
Present value
*/

// Present value
double Chapter3CPPBook::PresentValue(double Pn, long nPeriods, double r)
{
    double factor = 1.0 + r;
    return Pn / Chapter3CPPBook::power(factor, nPeriods);
}

// Present value of series of future values
double Chapter3CPPBook::PresentValue(const Chapter3CPPBook::Vector& prices, long nPeriods, double r)
{
    // nPeriods must be equal to size of prices
    assert(nPeriods == prices.size());

    double factor = 1.0 + r;
    double PV = 0.0;

    for (long t = 0; t < nPeriods; t++)
    {
        PV += prices[t] / Chapter3CPPBook::power(factor, t+1);
    }
    return PV;
}

// Present value of an ordinary annuity
double Chapter3CPPBook::PresentValueOrdinaryAnnuity(double A, long nPeriods, double r)
{
    double factor = 1.0 + r;
    return (A / r) * (1 - (1 / Chapter3CPPBook::power(factor, nPeriods)));
}

// Conversion from rate with compounding m times per year to rate of interest with continuous compounding
double Chapter3CPPBook::ConversionfromDiscretetoContinuous(double rm, long m)
{
    double factor = 1.0 + (rm / m);
    return m * log(factor);
}

// Conversion from rate of interest with continuous compounding to the equivalent rate with compounding m times per year 
double Chapter3CPPBook::ConvertfromContinuoustoDiscrete(double rc, long m)
{
    return m * (exp(rc / m) - 1);
}

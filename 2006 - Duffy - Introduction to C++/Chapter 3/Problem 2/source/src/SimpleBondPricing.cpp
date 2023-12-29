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
double FutureValue(double P0, long nPeriods, double r, long m)
{
    return 0.0;
}

// Future value of sum of money invested today with continuous compounding
// limit as m goes to infinity
double FutureValueContinuous(double P0, long nPeriods, double r)
{
    return 0.0;
}

// Future value of an ordinary annuity
double OrdinaryAnnuity(double A, long nPeriods, double r)
{
    return 0.0;
}

/*
Present value
*/

// Present value
double PresentValue(double Pn, long nPeriods, double r)
{
    return 0.0;
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
double PresentValueOrdinaryAnnuity(double A, long nPeriods, double r)
{
    return 0.0;
}

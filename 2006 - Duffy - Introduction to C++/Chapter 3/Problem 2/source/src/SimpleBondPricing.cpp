#include "source/include/SimpleBondPricing.hpp"

double power(double d, long n)
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

// Future value of sum of money invested today paid once per year
double FutureValue(double P0, long nPeriods, double r)
{
    double factor = 1.0 + r;
    return P0 * power(factor, nPeriods);
}

// Future value of sum of money invested today paid m times per year
// r is annual interest rate
double FutureValue(double P0, long nPeriods, double r, long m)
{

}

// Future value of sum of money invested today with continuous compounding
// limit as m goes to infinity
double FutureValueContinuous(double P0, long nPeriods, double r);

// Future value of an ordinary annuity
double OrdinaryAnnuity(double A, long nPeriods, double r);

/*
Present value
*/

// Present value
double PresentValue(double Pn, long nPeriods, double r);

// Present value of series of future values
double PresentValue(const Vector& prices, long nPeriods, double r)
{
    // nPerioda must be equal to size of prices
    assert(nPeriods == prices.size());
}

// Present value of an ordinary annuity
double PresentValueOrdinaryAnnuity(double A, long nPeriods, double r);

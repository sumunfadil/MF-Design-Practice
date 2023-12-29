#ifndef SIMPLEBONDPRICING_HPP
#define SIMPLEBONDPRICING_HPP

#include <vector>
using namespace std;

namespace Chapter3CPPBook // Logical grouping of functions
{
    // Shorthand synonym
    typedef vector<double> Vector;

    // Power of a number - recursive formula
    double power(double d, long n);

    /*
    Future values
    */

    // Future value of sum of money invested today paid once per year
    double FutureValue(double P0, long nPeriods, double r);

    // Future value of sum of money invested today paid m times per year
    // r is annual interest rate
    double FutureValue(double P0, long nPeriods, double r, long m);

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
   double PresentValue(const Vector& prices, long nPeriods, double r);

   // Present value of an ordinary annuity
   double PresentValueOrdinaryAnnuity(double A, long nPeriods, double r);

} // namespace Chapter3CPPBook 


#endif /* SIMPLEBONDPRICING_HPP */

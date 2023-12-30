#include "SimpleBondPricing.hpp"
#include <iostream>

using namespace std;

int main()
{
    double P0 = 1000.0;
    long nPeriods = 5;
    double r = 0.0625;
    long m = 4;
    double A = 1000.0;
    double Pn = 1100.0;

    // Future value of sum of money invested today paid once per year
    cout << "************ Future value ************" << endl;
    cout << "FV of sum of money invested today paid once per year: " << Chapter3CPPBook::FutureValue(P0, nPeriods, r) << endl;
    
    // Future value of sum of money invested today paid m times per year
    cout << "FV of sum of money invested today paid m times per year: " << Chapter3CPPBook::FutureValue(P0, nPeriods, r, m) << endl;
    
    // Future value of sum of money invested today with continuous compounding
    cout << "FV of sum of money invested today with continuous compounding: " << Chapter3CPPBook::FutureValueContinuous(P0, nPeriods, r) << endl;

    // Future value of an ordinary annuity
    cout << "FV of an ordinary annuity: " << Chapter3CPPBook::OrdinaryAnnuity(A, nPeriods, r) << endl << endl;

    // Present value
    cout << "************ Present value ************" << endl;
    cout << "PV: " << Chapter3CPPBook::PresentValue(Pn, nPeriods, r) << endl;

    // Present value of series of future values
    Chapter3CPPBook::Vector futureValues(5); // 5 years
    for (int i = 0; i < 4; i++)
    {
        // First 4 years (coupons)
        futureValues[i] = 100.0;
    }
    futureValues[4] = 1100.0;

    cout << "PV of series of future values: " << Chapter3CPPBook::PresentValue(futureValues, nPeriods, r) << endl;

    // Present value of an ordinary annuity
    cout << "PV of an ordinary annuity: " << Chapter3CPPBook::PresentValueOrdinaryAnnuity(A, nPeriods, r) << endl << endl;

    double rm = 0.0625;
    double rc = 0.08;

    // Conversion from rate with compounding m times per year to rate of interest with continuous compounding
    cout << "************ Conversions ************" << endl;
    cout << "rm: " << rm << ", rc: " << Chapter3CPPBook::ConversionfromDiscretetoContinuous(rm, m) << endl;
    cout << "rc: " << rc << ", rm: " << Chapter3CPPBook::ConvertfromContinuoustoDiscrete(rc, m) << endl << endl;
    
    return 0;
}
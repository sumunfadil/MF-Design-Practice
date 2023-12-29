#include "SimpleBondPricing.hpp"
#include <iostream>

using namespace std;

int main()
{
    // Present value of series of future values
    Chapter3CPPBook::Vector futureValues(5); // 5 years
    for (int i = 0; i < 4; i++)
    {
        // First 4 years (coupons)
        futureValues[i] = 100.0;
    }
    futureValues[4] = 1100.0;

    int nPeriods = 5;
    double r = 0.0625;
    cout << "Present value of series: " << Chapter3CPPBook::PresentValue(futureValues, nPeriods, r) << endl;
    
    return 0;
}
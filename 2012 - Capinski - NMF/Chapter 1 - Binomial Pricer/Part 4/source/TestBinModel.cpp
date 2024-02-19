#include <iostream>
#include <cmath>
#include "BinModel01.hpp"

using namespace std;

int main()
{
    double S0, U, D, R;
    
    // Check data
    if (getInputData(S0, D, R, U) == 1) return 1;

    // Risk-neutral probability
    cout << "q = " << riskNeutralProbability(D, R, U) << endl;

    // S(3,2)
    int n = 3; int i = 2;
    cout << "n = " << n << endl;
    cout << "i = " << i << endl;
    cout << "S(n,i) = " << S(S0, D, U, n, i) << endl;

    return 0;
}
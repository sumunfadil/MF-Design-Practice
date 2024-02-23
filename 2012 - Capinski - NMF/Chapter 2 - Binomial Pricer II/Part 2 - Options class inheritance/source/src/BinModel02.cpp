#include "BinModel02.hpp"
#include <iostream>
#include <cmath>

using namespace std;

double BinModel::RiskNeutralProbability()
{
    return (R-D)/(U-D);
}


double BinModel::S(int n, int i)
{
    return S0 * pow(1+U, i) * pow(1+D, n-i);
}


int BinModel::GetInputData()
{
    // Enter data
    cout << "Enter S0: "; cin >> S0;
    cout << "Enter U: "; cin >> U;
    cout << "Enter D: "; cin >> D;
    cout << "Enter R: "; cin >> R;

    // Data checks
    if (S0 <= 0.0 || D <= -1.0 || U <= -1.0 || U <= D || R <= -1.0)
    {
        cout << "Illegal data ranges\n";
        cout << "Terminating program\n";
        return 1;
    }

    // Arbitrage
    if (R >= U || R <= D)
    {
        cout << "Arbitrage exists\n";
        cout << "Terminating program\n";
        return 1;
    }

    // All OK!
    cout << "Input data checked\n";
    cout << "There is no arbitrage\n";

    return 0;
}


double BinModel::GetR()
{
    return R;
}
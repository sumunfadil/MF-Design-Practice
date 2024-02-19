#include <iostream>
#include <cmath>

using namespace std;

/*
    USING FUNCTIONS TO PERFORM TASKS
*/

// Risk-neutral probability
double riskNeutralProbability(double D, double R, double U)
{
    return (R-D)/(U-D);
}

// S(n,i)
double S(double S0, double D, double U, int n, int i)
{
    return S0 * pow(1+U, i) * pow(1+D, n-i);
}

// Input data and checks
int getInputData(double& S0, double& D, double& R, double& U)
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
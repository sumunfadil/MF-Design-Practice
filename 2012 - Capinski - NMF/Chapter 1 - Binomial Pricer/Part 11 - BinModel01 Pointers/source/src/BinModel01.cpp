#include <iostream>
#include <cmath>

using namespace std;

double riskNeutralProbability(double D, double R, double U)
{
    return (R-D)/(U-D);
}

double S(double S0, double D, double U, int n, int i)
{
    return S0 * pow(1+U, i) * pow(1+D, n-i);
}

int getInputData(double* S0, double* D, double* R, double* U)
{
    // Use the *Ptr to access the value Ptr points to (recall Ptr stores an address)
    // You must pass references

    // Enter data
    cout << "Enter S0: "; cin >> *S0;
    cout << "Enter U: "; cin >> *U;
    cout << "Enter D: "; cin >> *D;
    cout << "Enter R: "; cin >> *R;

    // Data checks
    if (*S0 <= 0.0 || *D <= -1.0 || *U <= -1.0 || *U <= *D || *R <= -1.0)
    {
        cout << "Illegal data ranges\n";
        cout << "Terminating program\n";
        return 1;
    }

    // Arbitrage
    if (*R >= *U || *R <= *D)
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
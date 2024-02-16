#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double S0, U, D, R;

    // Enter data
    cout << "Enter S0: "; cin >> S0;
    cout << "Enter U: "; cin >> U;
    cout << "Enter D: "; cin >> D;
    cout << "Enter R: "; cin >> R;

    /* Check conditions:
        - S0 > 0
        - -1 < D < U (or 0 < 1 + D < 1 + U)
        - R > -1 (or ! + R > 0)
    */

    if (S0 <= 0.0 || D <= -1.0 || U <= -1.0 || U <= D || R <= -1.0)
    {
        cout << "Illegal data ranges\n";
        cout << "Terminating program\n";
        return 1;
    }

    // Check for arbitrage: D < R < U
    if (R >= U || R <= D)
    {
        cout << "Arbitrage exists\n";
        cout << "Terminating program\n";
        return 1;
    }

    cout << "Input data checked\n";
    cout << "There is no arbitrage\n";

    // Compute risk-neutral probability q = (R-D)/(U-D)
    double q = (R-D)/(U-D);
    cout << "q = " << q << endl;

    // Stock price at time n=3 with i=2 ups, S(n,i) = S(3,2) = S0*(1+U)^2*(1+D)^(3-2)
    //int n = 3; int i = 2;
    int n, i;
    cout << "Enter n: "; cin >> n;
    cout << "Enter i: "; cin >> i;
    cout << "n = " << n << endl;
    cout << "i = " << i << endl;
    double S = S0 * pow(1+U, i) * pow(1+D, n-i);
    cout << "S(n,i) = " << S << endl;

    return 0;
}
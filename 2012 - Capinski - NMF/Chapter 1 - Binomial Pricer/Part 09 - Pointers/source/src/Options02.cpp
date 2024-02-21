#include "Options02.hpp"
#include "BinModel01.hpp"
#include <iostream>
#include <cmath>

using namespace std;

int GetInputData(int* PtrN, double* PtrK) // Need to pass addresses
{
    cout << "Enter steps to expiry N: "; cin >> *PtrN;  // Access value at address PtrN 
    cout << "Enter strike price K: "; cin >> *PtrK;     // Access value at address PtrK
    cout << endl;

    return 0;
}

double PriceByCRR(double S0, double U, double D, double R, int N, double K)
{
    double q = riskNeutralProbability(D, R, U);
    double Price[N+1];  
    // Create an array of prices (which have consecutive memory addresses)
    // Price is a pointer of type double
    // Also Price holds the address of Price[0] (so Price[0] is *Price)
    // Price[i] is *(Price+i) 

    for (int i=0; i<=N; i++)
    {
        // Calculate payoff at time N for each state
        *(Price+i) = CallPayoff(S(S0,D,U,N,i), K);
    }

    // Perform a backwards recursion from n=N-1 to N=0
    for (int n=N-1; n>=0; n--)
    {
        for (int i=0; i<=n; i++)
        {
            // Note: Price[i] = (q*Price[i+1] + (1-q)*Price[i])/(1+R); 
            // is more readable!
            *(Price+i) = (q*(*(Price+i+1)) + (1-q)*(*(Price+i)))/(1+R);
        }
    }

    return *Price; // return Pointer to Price points to Price[0]

}

double CallPayoff(double z, double K)
{
    if (z>K) return z-K;
    return 0.0;
}
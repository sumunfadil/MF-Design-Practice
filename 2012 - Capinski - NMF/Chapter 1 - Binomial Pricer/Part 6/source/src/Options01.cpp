#include "Options01.hpp"
#include "BinModel01.hpp"
#include <iostream>
#include <cmath>

using namespace std;

int getInputData(int& N, double& K)
{
    cout << "Enter steps to expiry N: "; cin >> N;
    cout << "Enter strike price K: "; cin >> K;
    cout << endl;

    return 0;
}

double PriceByCRR(double S0, double U, double D, double R, int N, double K)
{
    double q = riskNeutralProbability(D, R, U);

    // Calculate a vector of prices at times 0,...,N (length N+1)
    double Price[N+1];

    // Calculate payoff at time N for each state
    int i = 0;
    while (i <= N)
    {
        Price[i] = CallPayoff(S(S0,D,U,N,i), K);
        i++;
    }

    // Perform a backwards recursion from n=N-1 to N=0
    int n = N-1;
    while (n >= 0)
    {
        int i = 0;
        while (i<=n)
        {
            Price[i] = (q*Price[i+1] + (1-q)*Price[i])/(1+R);
            i++;
        }
        n--;
    }
    
    return Price[0];

}

double CallPayoff(double z, double K)
{
    if (z>K) return z-K;
    return 0.0;
}
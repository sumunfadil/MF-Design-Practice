#include "Options03.hpp"
#include "BinModel01.hpp"
#include <iostream>
#include <cmath>

using namespace std;

int GetInputData(int& N, double& K) 
{
    cout << "Enter steps to expiry N: "; cin >> N;  
    cout << "Enter strike price K: "; cin >> K;   
    cout << endl;

    return 0;
}

double PriceByCRR(double S0, double U, double D, 
                  double R, int N, double K,
                  double (*Payoff)(double z, double K))
{
    double q = riskNeutralProbability(D, R, U);
    double Price[N+1];  

    for (int i=0; i<=N; i++)
    {
        // Calculate payoff at time N for each state
        Price[i] = Payoff(S(S0,D,U,N,i), K);
    }

    // Perform a backwards recursion from n=N-1 to N=0
    for (int n=N-1; n>=0; n--)
    {
        for (int i=0; i<=n; i++)
        {
            Price[i] = (q*Price[i+1] + (1-q)*Price[i])/(1+R);             
        }
    }

    return Price[0]; 

}

double CallPayoff(double z, double K)
{
    if (z>K) return z-K;
    return 0.0;
}

double PutPayoff(double z, double K)
{
    return (K>z) ? K-z : 0.0;
}
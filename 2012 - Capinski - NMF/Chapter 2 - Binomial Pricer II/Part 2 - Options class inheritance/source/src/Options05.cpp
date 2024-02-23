#include "Options05.hpp"
#include "BinModel02.hpp"
#include <iostream>
#include <cmath>

using namespace std;

double EuropeanOption::PriceByCRR(BinModel Model, double K)
{
    double q = Model.RiskNeutralProbability();
    double Price[N+1];

    for (int i=0; i<=N; i++)
    {
        Price[i] = Payoff(Model.S(N,i), K); // Payoff is generic
    }

    for (int n=N-1; n>=0; n--)
    {
        for (int i=0; i<=n; i++)
        {
            Price[i] = (q*Price[i+1] + (1-q)*Price[i])/(1+Model.GetR());
        }
    }
    return Price[0];
}

double CallPayoff(double z, double K)
{
    return (z>K) ? z-K : 0.0;
}

int Call::GetInputData()
{
    cout << "Enter call option data" << endl;
    int N;          
    // Class Call can't access private data members of EuropeanOption
    cout << "Enter steps to expiry N: "; cin >> N;
    SetN(N);
    cout << "Enter strike price K: "; cin >> K;
    cout << endl;

    return 0;
}

double PutPayoff(double z, double K)
{
    return (K>z) ? K-z : 0.0;
}

int Put::GetInputData()
{
    cout << "Enter put option data" << endl;
    int N;          
    // Class Put can't access private data members of EuropeanOption
    cout << "Enter steps to expiry N: "; cin >> N;
    SetN(N);
    cout << "Enter strike price K: "; cin >> K;
    cout << endl;

    return 0;
}
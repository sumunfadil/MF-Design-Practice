#include "Options04.hpp"
#include "BinModel02.hpp"
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

double PriceByCRR(BinModel Model, int N, double K,
                  double (*Payoff)(double z, double K))
{
    double q = Model.RiskNeutralProbability();
    double Price[N+1];

    for (int i=0; i<=N; i++)
    {
        Price[i] = Payoff(Model.S(N,i), K);
    }

    for (int n=N-1; n>=0; n--)
    {
        for (int i=0; i<=n; i++)
        {
            Price[i] = (q*Price[i+1]+(1-q)*Price[i])/(1+Model.getR());
        }
    }
    return Price[0];
}

double CallPayoff(double z, double K)
{
    return (z>K) ? z-K : 0.0;
}

double PutPayoff(double z, double K)
{
    return (K>z) ? K-z : 0.0;
}
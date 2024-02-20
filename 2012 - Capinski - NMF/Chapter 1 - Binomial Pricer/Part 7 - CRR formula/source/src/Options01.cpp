#include "Options01.hpp"
#include "BinModel01.hpp"
#include <iostream>
#include <cmath>
#include "MathFunctions.hpp"

using namespace std;

int getInputData(int& N, double& K)
{
    // Checks
    if (K <= 0.0 || N <= 0)
    {
        cout << "Illegal data ranges!\n";
        cout << "Terminating program.\n";
        return 1;
    }

    cout << "Enter steps to expiry N: "; cin >> N;
    cout << "Enter strike price K: "; cin >> K;
    cout << endl;

    return 0;
}

double PriceByCRR(double S0, double U, double D, double R, int N, double K)
{
    double q = riskNeutralProbability(D, R, U);
    double price = 0.0;

    for (int i = 0; i <= N; i++)
    {
        price += (factorial(N) / (factorial(i) * factorial(N-i))) * pow(q, i) * pow(1-q, N-i) * CallPayoff(S(S0,D,U,N,i), K);
    }

    return price / pow(1+R, N);
}

double CallPayoff(double z, double K)
{
    if (z>K) return z-K;
    return 0.0;
}
#include "Options06.hpp"
#include "BinModel02.hpp"
#include <iostream>
#include <cmath>

using namespace std;

double EuropeanOption::PriceByCRR(BinModel Model)
{
    double q = Model.RiskNeutralProbability();
    double Price[N+1];

    for (int i=0; i<=N; i++)
    {
        Price[i] = Payoff(Model.S(N,i)); 
        // Payoff is generic, no strike here (strike is an attribute of individual option)
        
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

double Call::Payoff(double z)
{
    // Accesssing K through European option
    return (z>K) ? z-K : 0.0;
}

int Put::GetInputData()
{
    cout << "Enter put option data" << endl;
    int N;          
    // Class Call can't access private data members of EuropeanOption
    cout << "Enter steps to expiry N: "; cin >> N;
    SetN(N);
    cout << "Enter strike price K: "; cin >> K;
    cout << endl;

    return 0;
}

double Put::Payoff(double z)
{
    // Accesssing K through European option
    return (K>z) ? K-z : 0.0;
}

int BullSpread::GetInputData()
{
    cout << "Enter bear spread option data" << endl;
    int N;          
    // Class Call can't access private data members of EuropeanOption
    cout << "Enter steps to expiry N: "; cin >> N;
    SetN(N);
    cout << "Enter strike price K1: "; cin >> K1;
    cout << "Enter strike price K2: "; cin >> K2;
    cout << endl;

    if (K1 >= K2)
    {
        cout << "Illegal data ranges\n";
        cout << "Terminating program\n";
        return 1;
    }

    return 0;
}

double BullSpread::Payoff(double z)
{
    // Access K1 and K2 through BullSpread class
    return (K1 >= z) ? 0.0 : ((K1 < z && z < K2) ? (z-K1) : K2-K1);
}

int BearSpread::GetInputData()
{
    cout << "Enter bear spread option data" << endl;
    int N;          
    // Class Call can't access private data members of EuropeanOption
    cout << "Enter steps to expiry N: "; cin >> N;
    SetN(N);
    cout << "Enter strike price K1: "; cin >> K1;
    cout << "Enter strike price K2: "; cin >> K2;
    cout << endl;

    if (K1 >= K2)
    {
        cout << "Illegal data ranges\n";
        cout << "Terminating program\n";
        return 1;
    }

    return 0;
}

double BearSpread::Payoff(double z)
{
    // Access K1 and K2 through BullSpread class
    return (K1 >= z) ? K2-K1 : ((K1 < z && z < K2) ? (K2-z) : 0.0);
}
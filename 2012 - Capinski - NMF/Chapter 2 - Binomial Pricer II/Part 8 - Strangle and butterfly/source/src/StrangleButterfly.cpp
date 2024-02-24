#include "StrangleButterfly.hpp"
#include <iostream>

using namespace std;

int Strangle::GetInputData()
{
    cout << "Enter strangle option data" << endl;
    int N;          
    cout << "Enter steps to expiry N: "; cin >> N;
    SetN(N);
    cout << "Enter strike price K1: "; cin >> K1;
    cout << "Enter strike price K2: "; cin >> K2;
    cout << endl;

    return 0;
}


double Strangle::Payoff(double z)
{
    return (z<=K1) ? K1-z : ((K1 < z && z <= K2) ? 0.0 : z-K2);
}


int Butterfly::GetInputData()
{
    cout << "Enter butterfly option data" << endl;
    int N;          
    cout << "Enter steps to expiry N: "; cin >> N;
    SetN(N);
    cout << "Enter strike price K1: "; cin >> K1;
    cout << "Enter strike price K2: "; cin >> K2;
    cout << endl;

    return 0;
}

double Butterfly::Payoff(double z)
{
    return (K1 < z && z <= 0.5*(K1+K2)) ? z-K1 : ((0.5*(K1+K2) < z && z <= K2) ? K2-z : 0.0);
}
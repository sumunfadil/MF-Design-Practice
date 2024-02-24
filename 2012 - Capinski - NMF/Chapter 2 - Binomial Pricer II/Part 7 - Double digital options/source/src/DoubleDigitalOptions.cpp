#include "DoubleDigitalOptions.hpp"
#include <iostream>

using namespace std;

int DoubleDigitalOptions::GetInputData()
{
    cout << "Enter bear spread option data" << endl;
    int N;          
    cout << "Enter steps to expiry N: "; cin >> N;
    SetN(N);
    cout << "Enter strike price K1: "; cin >> K1;
    cout << "Enter strike price K2: "; cin >> K2;
    cout << endl;

    return 0;
}

double DoubleDigitalOptions::Payoff(double z)
{
    return (K1<z && z<K2) ? 1.0 : 0.0;
}
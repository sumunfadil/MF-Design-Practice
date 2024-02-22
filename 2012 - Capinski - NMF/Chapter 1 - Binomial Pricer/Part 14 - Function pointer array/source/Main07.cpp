#include "BinModel01.hpp"
#include "Options03.hpp"
#include "Payoff.hpp"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double S0,U,D,R;

    if (GetInputData(S0,U,D,R) == 1) return 1;

    double K, K1, K2;   // Strike price
    int N;      // Steps to expiry

    cout << "Enter call option data: \n";
    GetInputData(N,K);
    cout << "European call price: " << PriceByCRR(S0,U,D,R,N,K,0.0,CallPayoff) << endl << endl;

    cout << "Enter call option data: \n";
    GetInputData(N,K);
    cout << "European call price: " << PriceByCRR(S0,U,D,R,N,K,0.0,PutPayoff) << endl << endl;

    cout << "Enter digital call option data: \n";
    GetInputData(N,K);
    cout << "Digital call price: " << PriceByCRR(S0,U,D,R,N,K,0.0,DigitalCallPayoff) << endl << endl;

    cout << "Enter digital put option data: \n";
    GetInputData(N,K);
    cout << "Digital put price: " << PriceByCRR(S0,U,D,R,N,K,0.0,DigitalPutPayoff) << endl << endl;

    cout << "Enter double digital option data: \n";
    GetInputData(N,K1,K2);
    cout << "Double digital price: " << PriceByCRR(S0,U,D,R,N,K1,K2,DoubleDigitalPayoff) << endl << endl;

    return 0;
}
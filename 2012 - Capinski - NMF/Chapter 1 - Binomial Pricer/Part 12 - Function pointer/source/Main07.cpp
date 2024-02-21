#include "BinModel01.hpp"
#include "Options03.hpp"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double S0,U,D,R;

    if (GetInputData(S0,U,D,R) == 1) return 1;

    double K;   // Strike price
    int N;      // Steps to expiry

    cout << "Enter call option data: \n";
    GetInputData(N,K);
    cout << "European call price: " << PriceByCRR(S0,U,D,R,N,K,CallPayoff) << endl << endl;

    cout << "Enter call option data: \n";
    GetInputData(N,K);
    cout << "European call price: " << PriceByCRR(S0,U,D,R,N,K,PutPayoff) << endl << endl;

    return 0;
}
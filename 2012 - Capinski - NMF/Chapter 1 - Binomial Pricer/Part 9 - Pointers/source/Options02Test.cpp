#include "BinModel01.hpp"
#include "Options02.hpp"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double S0,U,D,R;

    if (getInputData(S0,D,R,U) == 1) return 1;

    double K;       // Strike price
    int N;          // Steps to expiry

    cout << "Enter call option data: " << endl;
    GetInputData(&N, &K);
    cout << "European call option price = " << PriceByCRR(S0,U,D,R,N,K) << endl << endl;

    return 0;
}
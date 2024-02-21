#include <iostream>
#include "BinModel01.hpp"
#include "Options01.hpp"
#include <cmath>

using namespace std;

int main()
{
    double S0, U, D, R;

    if (getInputData(S0,U,D,R)==1) return 1;

    double K;  // Strike
    int N;     // Time to maturity

    cout << "Enter call option data: " << endl;
    getInputData(N, K);
    cout << "European call price = " << PriceByCRR(S0,U,D,R,N,K) << endl << endl;
    
    return 0;
}
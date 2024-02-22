#include "BinModel02.hpp"
#include "Options04.hpp"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    BinModel Model;

    if (Model.GetInputData() == 1) return 1;

    double K; 
    int N;

    cout << "Enter call option data: " << endl;
    GetInputData(N,K);
    cout << "European call price = " 
         << PriceByCRR(Model,N,K,CallPayoff) << endl << endl;

    cout << "Enter put option data: " << endl;
    GetInputData(N,K);
    cout << "European put price = " 
         << PriceByCRR(Model,N,K,PutPayoff) << endl << endl;

    return 0;
}
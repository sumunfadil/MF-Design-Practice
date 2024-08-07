#include "BinModel02.hpp"
#include "Options06.hpp"
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    BinModel Model;

    if (Model.GetInputData() == 1) return 1;

    Call CallOption;
    CallOption.GetInputData();
    cout << "European call price: " 
         << CallOption.PriceByCRR(Model) << endl << endl;
     // CallOption is a EuropeanOption, so it can access PriceByCRR

    Put PutOption;
    PutOption.GetInputData();
    cout << "European put price: " 
         << PutOption.PriceByCRR(Model) << endl << endl;
     // PutOption is a EuropeanOption, so it can access PriceByCRR

    EuropeanOption Option;
    cout << "European option virtual funtion returns: " << Option.Payoff(1.0) << endl << endl;
    //cout << "European option price: " << Option.PriceByCRR(Model) << endl << endl;

    return 0;
}
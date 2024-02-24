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

    BullSpread BullSpreadOption;    
    BearSpread BearSpreadOption;

    if (BullSpreadOption.GetInputData() == 1 || BearSpreadOption.GetInputData() == 1)
    {
        return 1;
    }

    cout << "Bull spread option price: " 
         << BullSpreadOption.PriceByCRR(Model) << endl << endl;

    cout << "Bear spread option price: " 
         << BearSpreadOption.PriceByCRR(Model) << endl << endl;

    return 0;
}
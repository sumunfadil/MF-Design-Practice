#include "BinModel02.hpp"
#include "Options06.hpp"
#include "DoubleDigitalOptions.hpp"
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    BinModel Model;

    if (Model.GetInputData() == 1) return 1;

    Call CallOption;
    CallOption.GetInputData();
    cout << "\nEuropean call price: " 
         << CallOption.PriceByCRR(Model) << endl << endl;
     // CallOption is a EuropeanOption, so it can access PriceByCRR

    Put PutOption;
    PutOption.GetInputData();
    cout << "European put price: " 
         << PutOption.PriceByCRR(Model) << endl << endl;
     // PutOption is a EuropeanOption, so it can access PriceByCRR

    BullSpread BullSpreadOption; 
    BullSpreadOption.GetInputData();
    cout << "Bull spread option price: " 
         << BullSpreadOption.PriceByCRR(Model) << endl << endl;

    BearSpread BearSpreadOption;
    BearSpreadOption.GetInputData();
    cout << "Bear spread option price: " 
         << BearSpreadOption.PriceByCRR(Model) << endl << endl;

    DoubleDigitalOptions DigitalOption;
    DigitalOption.GetInputData();
    cout << "Double-digital option price: " 
         << DigitalOption.PriceByCRR(Model) << endl << endl;


    return 0;
}
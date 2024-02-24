#include "BinModel02.hpp"
#include "Options06.hpp"
#include "DoubleDigitalOptions.hpp"
#include "StrangleButterfly.hpp"
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    BinModel Model;

    if (Model.GetInputData() == 1) return 1;

     Strangle StrangleOption;
     StrangleOption.GetInputData();
     cout << "Strangle option price: " 
         << StrangleOption.PriceByCRR(Model) << endl << endl;

     Butterfly ButterflyOption;
     ButterflyOption.GetInputData();
     cout << "Butterfly option price: " 
         << ButterflyOption.PriceByCRR(Model) << endl << endl;

    return 0;
}
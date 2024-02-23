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

    Put PutOption;
    PutOption.GetInputData();
    cout << "European put price: " 
         << PutOption.PriceByCRR(Model) << endl << endl;

    return 0;
}
#include "BinModel02.hpp"
#include "Options05.hpp"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    BinModel Model;

    if (Model.GetInputData() == 1) return 1;

    Call Option1;
    Option1.GetInputData();
    cout << "European call price: " << Option1.PriceByCRR(Model, Option1.GetK()) << endl << endl;

    Put Option2;
    Option2.GetInputData();
    cout << "European put price: " << Option2.PriceByCRR(Model, Option2.GetK()) << endl << endl;
    
    return 0;
}

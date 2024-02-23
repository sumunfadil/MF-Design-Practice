#include "integral.hpp"
#include <iostream>
#include <cmath>

using namespace std;

double func(double x)
{
    return x*x*sin(x);
}

int main()
{
    DefInt Integral(0.0, 2.0, func);
    cout << "Area under curve (using Trapezium rule) is " 
         << Integral.Trapezoidal(100) << endl;
    cout << "Area under curve (using Simpson rule) is " 
         << Integral.Simpson(100) << endl;

    return 0;
}




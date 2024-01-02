// Use Run/Debug button for small C++ scripts

#include<iostream>

using namespace std;

double Max(double x, double y)
{
    if (x > y) return x;
    
    return y;
}

int main()
{
    // Passing parameters by value or parameters used in a call-by-value manner
    // we work with copies of d1 and d2 
    double d1 = 1.0;
    double d2 = -345.0;

    double result = Max(d1, d2);
    cout << "Max value is: " << result << endl;

    return 0;
}
/*
Main program (Console-based) to test Max and Min functions.
*/

#include "Inequalities.hpp"
#include <iostream>
using namespace std;

int main()
{
    // Input data
    double d1, d2;
    cout << "Give first number: ";
    cin >> d1;
    cout << "Give second number: ";
    cin >> d2;

    // Min or max
    char c;
    cout << "Which function a) Max() or b) Min()? ";
    cin >> c;

    // Two inputs
    if (&c == "a") // Why by reference?
    {
        cout << "Max value is: " << Max(d1, d2) << endl;
    }
    else // Problem: can be anything not "a"
    {
        cout << "Min value is: " << Min(d1, d2) << endl;
    }

    // Three inputs
    double dA = 1.0; double dB = 2.0; double dC = 3.0;
    cout << "\n\nMax and min of three numbers: " << endl;
    cout << "Max value is: " << Max(dA, dB, dC) << endl;
    cout << "Min value is: " << Min(dA, dB, dC) << endl;

    return 0;
}
#include<iostream>
using namespace std;

#include "src/GenericInequalities.cpp"

int main()
{
    // Input data
    int d1, d2;
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
        cout << "Max value is: " << Max<int>(d1, d2) << endl;
    }
    else // Problem: can be anything not "a"
    {
        cout << "Min value is: " << Min<int>(d1, d2) << endl;
    }

    // Three inputs
    long dA = 12234; long dB = 2; long dC = -3;
    cout << "\n\nMax and min of three numbers: " << endl;
    cout << "Max value is: " << Max<long>(dA, dB, dC) << endl;
    cout << "Min value is: " << Min<long>(dA, dB, dC) << endl;

    return 0;
}
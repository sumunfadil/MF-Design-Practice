#include "src\Sums.cpp"
#include <iostream>

using namespace std;

int main()
{
    // Input data
    int d1, d2;
    cout << "Give first number: ";
    cin >> d1;
    cout << "Give second number: ";
    cin >> d2;

    cout << "Sum is: " << Sum<int>(d1, d2) << endl;

    double dA = 1.0; double dB = 2.0; double dC = 3.0;
    cout << "Sum is: " << Sum<double>(dA, dB, dC) << endl;

    return 0;
}
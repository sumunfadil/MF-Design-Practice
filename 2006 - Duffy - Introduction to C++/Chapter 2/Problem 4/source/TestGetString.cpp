#include "src\GetString.cpp"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int i = 10;
    long j = 1254265251;
    float f = 3.14f;
    double d = 2.712222222223;

    string myString = getString<int>(i);
    cout << myString << endl;

    myString = getString<long>(j);
    cout << myString << endl;

    myString = getString<float>(f);
    cout << myString << endl;

    myString = getString<double>(d);
    cout << myString << endl;

    return 0;
}
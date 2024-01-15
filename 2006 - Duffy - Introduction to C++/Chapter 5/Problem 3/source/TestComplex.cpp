#include <iostream>
#include "Complex.hpp"

using namespace std;

int main()
{
    Complex c1(1.0, 3.4);
    Complex c2;
    Complex c3 = c2.add(c1) + c1;

    c1.print();
    c2.print();
    c3.print();

    return 0;
}
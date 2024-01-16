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

    Complex c4 = c1 - c3;
    cout << "c4 = c1 - c3\n";
    c4.print();

    Complex c5 = c3*c1;
    cout << "c5 = c3*c1\n";
    c5.print();

    Complex c6 = c3/c1;
    cout << "c6 = c3/c1\n";
    c6.print();

    // Complex times double
    Complex c7 = 3.5 * c1;
    cout << "c7 = 3.5 * c1\n";
    c7.print();

    Complex c8 = c1 * 5;
    cout << "c8 = c1 * 5\n";
    c8.print();

    Complex z0(1.0, 2.0);
    Complex z1, z2, z3, z4;
    z4 = z3 = z2 = z1 = z0;
    cout << "Chain:\n";
    z1.print();
    z2.print();
    z3.print();
    z4.print();
    z0.print();

    return 0;
}
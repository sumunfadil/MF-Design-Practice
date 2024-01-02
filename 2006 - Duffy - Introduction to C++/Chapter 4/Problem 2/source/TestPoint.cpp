#include <iostream>
#include "Point.hpp"

using namespace std;

int main()
{
    // Construct a point
    Point p1(1.0, 3.14);

    // Read coordinate on console
    cout << "\nCoordinates of p1:\n";
    cout << "First coordinate: " << p1.X() << endl;
    cout << "Second coordinate: " << p1.Y() << endl;

    // Modify coordinates
    p1.X(2.0);
    p1.Y(5.0);

    // Read coordinate on console
    cout << "\nCoordinates of p1 (after modification):\n";
    cout << "First coordinate: " << p1.X() << endl;
    cout << "Second coordinate: " << p1.Y() << endl;

    // Constructors
    Point p2(p1);
    Point p3;
    Point p4(1.0, 2.5, 6.0);


    // Read coordinates on console
    cout << "\nCoordinates of p2:\n";
    cout << "First coordinate: " << p2.X() << endl;
    cout << "Second coordinate: " << p2.Y() << endl;

    // Read coordinates on console
    cout << "\nCoordinates of p3:\n";
    cout << "First coordinate: " << p3.X() << endl;
    cout << "Second coordinate: " << p3.Y() << endl;

    // Read coordinates on console
    cout << "\nCoordinates of p4:\n";
    cout << "First coordinate: " << p4.X() << endl;
    cout << "Second coordinate: " << p4.Y() << endl;


    return 0;
}
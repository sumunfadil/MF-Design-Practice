#include <iostream>
#include "Points.hpp"

using namespace std;

int main()
{
    // Work with the unique origin point
    // Static member functions must be called in a special way.
    // Send message to class Point rather than a object
    cout << "Origin point: " << Point::GetOriginPoint() << endl;

    // Choose new coordinates for new origin
    // Static memeber function can be used on LHS of assignment statement to modify contents of static object OriginPoint
    Point::GetOriginPoint() = Point(1.0, 2.0);
    cout << "Origin point: " << Point::GetOriginPoint() << endl;

    // Midpoint
    Point p1(3.0, 4.0);
    Point p2(5.0, 5.5);
    cout << "Midpoint between p1: " << p1 << " and p2: " << p2 << " is " << p1.MidPoint2(p2) << endl;

    // Another application of anonymous objects
    Point p3(5.5, 6.5);
    cout << "Midpoint: " << p3.MidPoint2(Point(4.5, 5.5)) << endl;

    // Triple anonymous
    cout << "Midpoint: " << Point(5.5, 7.5).MidPoint2(Point(4.5, 5.5)) << endl;


    return 0;
}
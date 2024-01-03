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

    return 0;
}
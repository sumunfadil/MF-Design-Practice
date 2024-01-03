#include <iostream>
#include "Points.hpp"

using namespace std;

int main()
{
    // Work with the unique origin point
    cout << "Origin point: " << Point::GetOriginPoint() << endl;

    // Choose new coordinates for new origin
    Point::GetOriginPoint() = Point(1.0, 2.0);
    cout << "Origin point: " << Point::GetOriginPoint() << endl;

    return 0;
}
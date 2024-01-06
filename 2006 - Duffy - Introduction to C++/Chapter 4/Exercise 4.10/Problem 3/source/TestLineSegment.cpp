#include <iostream>
#include "LineSegment.hpp"

using namespace std;

int main()
{

    // Line segments
    LineSegment l0;
    LineSegment l1(l0.start(), Point(5.0, 6.75));
    LineSegment l2(l0.end(), Point(3.2, 10.5));

    // Print endpoints
    l1.print();
    l2.print();

    // Lengths
    cout << "Length of l1 is: " << l1.length() << endl;
    cout << "Length of l2 is: " << l2.length() << endl;

    // Midpoints
    cout << "Midpoint of l1 is: " << l1.midPoint() << endl;
    cout << "Midpoint of l2 is: " << l2.midPoint() << endl;

    return 0;
}
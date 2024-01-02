#include "Point.hpp"

/*
    Constructors
*/

Point::Point()
{
    // Default constructor
    init(0.0, 0.0);
}

Point::Point(double xs, double ys)
{
    // Constructor with coordinates
    init(xs, ys);
}

Point::Point(const Point& source)
{
    // Copy constructor
    init(source.x, source.y);
}


/*
    Helper function
*/

void Point::init(double xs, double ys)
{
    x = xs;
    y = ys;
}
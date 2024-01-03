#include "Points.hpp"

// Initialise static object (at start of cpp file)
// Global object
Point Point::OriginPoint = Point(0.0, 0.0);

// Constructors
Point::Point() : x(0.0), y(0.0) {}
Point::Point(double xs, double ys) : x(xs), y(ys) {}
Point::Point(const Point& source) : x(source.x), y(source.y) {}

// Destructors
Point::~Point() {}

// Selectors
double Point::X() const
{
    return x;
}

double Point::Y() const
{
    return y;
}

// Modifiers
void Point::X(double newX)
{
    x = newX;
}

void Point::Y(double newY)
{
    y = newY;
}

// Member function that allows access to static object OriginPoint
// Accessing global object
// Returns address of OriginPoint
Point& Point::GetOriginPoint()
{
    return OriginPoint;
}

// Operator overload
std::ostream& operator << (std::ostream& os, const Point& point) {
    os << "x: " << point.x << " and y: " << point.y;
    return os;
}

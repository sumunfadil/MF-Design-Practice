#include "Point3D.hpp"

// Initialise static object (at start of cpp file)
// Global object
Point Point::OriginPoint = Point(0.0, 0.0, 0.0);

// Constructors
Point::Point() : x(0.0), y(0.0), z(0.0) {}
Point::Point(double xs, double ys, double zs) : x(xs), y(ys), z(zs) {}
Point::Point(const Point& source) : x(source.x), y(source.y), z(source.z) {}

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

double Point::Z() const
{
    return z;
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

void Point::Z(double newZ)
{
    z = newZ;
}

// Member function that allows access to static object OriginPoint
// Accessing global object
// Returns reference to OriginPoint i.e. its address and not some copy 
Point& Point::GetOriginPoint()
{
    return OriginPoint;
}

// Operator overload
std::ostream& operator << (std::ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ", " << point.z << ")";
    return os;
}

Point Point::MidPoint(const Point& p2) const
{
    // Calculate midpoint between two points
    Point result((x + p2.x)*0.5, (y + p2.y)*0.5, (z + p2.z)*0.5);
    return result;
}

Point Point::MidPoint2(const Point& p2) const
{
    // Create an anonymous object
    // Not a named object
    // Call constructor and let compiler create a name for us
    return Point((x + p2.x)*0.5, (y + p2.y)*0.5, (z + p2.z)*0.5);
}

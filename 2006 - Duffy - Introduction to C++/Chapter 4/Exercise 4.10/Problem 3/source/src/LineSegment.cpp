#include "LineSegment.hpp"
#include <math.h>

// Constructors
LineSegment::LineSegment() : e1(Point()), e2(Point()) {}
LineSegment::LineSegment(const Point& p1, const Point& p2) : e1(Point(p1)), e2(Point(p2)) {}
LineSegment::LineSegment(const LineSegment& l) : e1(l.e1), e2(l.e2) {}
LineSegment::~LineSegment() {}

// Access functions
Point LineSegment::start() const
{
    return e1;
}

Point LineSegment::end() const
{
    return e2;
}

// Modifiers
void LineSegment::start(const Point& pt)
{
    e1 = Point(pt);
}

void LineSegment::end(const Point& pt)
{
    e2 = Point(pt);
}

// Arithmetic
double LineSegment::length() const
{
    return sqrt((e1.X() - e2.X())*(e1.X() - e2.X()) + (e1.Y() - e2.Y())*(e1.Y() - e2.Y()));
}

// Interaction with Points
Point LineSegment::midPoint() const
{
    return e1.MidPoint2(e2);
}




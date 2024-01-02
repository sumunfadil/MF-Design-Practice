/*
    New concept:
    - Initialiser e.g. Point::Point() : x(0.0), y(0.0) {}
    - More efficient than assignment e.g. using init() function
    - Uses the colon syntax, which is also used in inheritance
*/

#include "Point.hpp"
#include <iostream>

using namespace std;

// Helper (private) function

void Point::init(double xs, double ys)
{
    x = xs;
    y = ys;
}

// Constructors

Point::Point() //: x(0.0), y(0.0)
{
    // Default constructor
    init(0.0, 0.0);
}

Point::Point(double xs, double ys) //: x(xs), y(ys)
{
    // Constructor with coordinates
    init(xs, ys);
}

Point::Point(const Point& source) //: x(source.x), y(source.y)
{
    // Copy constructor
    init(source.x, source.y);
}

Point::Point(double xs, double ys, double zs) : x(xs), y(ys), z(zs)
{
    // Contructor using initialiser - more efficient than assignment
    // init(xs, ys, zs); NOT NEEDED
    cout << "Contructor using initialiser";
} 

// Destructors

Point::~Point()
{
    cout << "Destructor called\n"; 
}

// Selectors

double Point::X() const
{
    // Constant member function - data cannot be modified
    // Returns copy of Member data
    return x;
}

double Point::Y() const
{
    // constant member function - data cannot be modified
    // Returns copy of Member data
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


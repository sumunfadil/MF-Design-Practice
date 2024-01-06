#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"
using namespace std;

class LineSegment
{
    // A line segment consisting of two points

private:

    Point e1; // End Point of line
    Point e2; // End Point of line

public:

    // Constructors
    LineSegment();  // Line with both endpoints at origin
    LineSegment(const Point& p1, const Point& p2);
    LineSegment(const LineSegment& l);  // Copy constructor
    virtual ~LineSegment();             // Destructor

    // Access functions
    Point start() const;                // Synonym for e1
    Point end() const;                  // Synonym for e2

    // Modifiers
    void start(const Point& pt);        // Set Point p1
    void end(const Point& pt);          // Set Point p2

    // Arithmetic
    double length() const;              // Length of a line

    // Interaction with Points
    Point midPoint() const;             // MidPoint of line

    // Print a line, the code is "default" inline
    void print() {cout << "l1 starts at " << e1 << " and ends at " << e2 << endl;}

};


#endif /* LINESEGMENT_HPP */

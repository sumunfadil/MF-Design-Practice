#ifndef POINT_HPP
#define POINT_HPP

// After creating a Point object, we want to access the data (x and y) by gving a copy of the data

class Point
{
private:
    void init(double xs, double ys);

    // Properties for x and y coordinates
    double x;
    double y;

public:

    // Constructor
    Point();                      // Default constructor  
    Point(double xs, double ys);  // Parameterised constructor - call-by-value
    Point(const Point& source);   // Copy constructor - class instance by const-reference

    // Destructor
    virtual ~Point();

    // Selectors (or getters)
    // Constant member functions
    double X() const; // Returns x
    double Y() const; // Returns y

    // Modifiers (or setters)
    // 
};

#endif /* POINT_HPP */

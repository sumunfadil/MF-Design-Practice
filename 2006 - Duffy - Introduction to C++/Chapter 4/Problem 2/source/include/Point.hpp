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
    double z;

public:

    // Constructor
    // THIS IS AN EXAMPLE OF FUNCTION OVERLOADING
    Point();                      // Default constructor  
    Point(double xs, double ys);  // Parameterised constructor - call-by-value
    Point(double xs, double ys, double zs); // Constructor using initialiser
    Point(const Point& source);   // Copy constructor - class instance by const-reference

    // Destructor
    virtual ~Point();

    // Selectors (or getters)
    // Constant member functions
    double X() const; // Returns x
    double Y() const; // Returns y

    // Modifiers (or setters)
    // Cannot be constant member functions since they modify the member data
    void X(double newX); // Set X
    void Y(double newY); // Set Y
};

#endif /* POINT_HPP */





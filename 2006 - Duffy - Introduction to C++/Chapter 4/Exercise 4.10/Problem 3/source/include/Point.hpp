/*
    STATIC MEMORY: An object allocated in static memory is constructed just once and persists until the program ends. IT ALWAYS HAS THE SAME ADDRESS.
    APPLICATIONS: Static class member functions and static member data.
    GOAL: We want to create a global instance (object) of the class Point which is unique.
    DESIGN PATTERN: This is a variant of the SINGLETON pattern.
    DIFFERENCE BETWEEN STATIC AND SINGLETON PATTERN: Static objects persist in memory for the duration of the program. Singleton is initialised only when needed
        and can be deleted at any moment.
*/

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

class Point //: public Shape
{
    private:

        // Member data
        double x;
        double y;

        // Declare static object (in private member data in header file)
        // OriginPoint is a class instance of class Point which is static
        // Global pbject
        // Static member data
        // NOTE: Address of OriginPoint is fixed but its value can changed
        static Point OriginPoint;
    
    public:

        // Constructors
        Point();                       
        Point(double xs, double ys);  
        Point(const Point& source);  

        // Destructor
        virtual ~Point();

        // Selectors 
        // Constant member functions
        double X() const; // Returns x
        double Y() const; // Returns y

        // Modifiers
        void X(double newX); // Set X
        void Y(double newY); // Set Y

        // Static member function
        // Returns address of static object (which recall does not change)
        // The value at that address may change though
        static Point& GetOriginPoint();

        // Operator overload
        friend std::ostream& operator << (std::ostream& os, const Point& point);

        Point MidPoint(const Point& p2) const;

        // Anonymous objects - member functions producing an object of a class a return type
        // We do this by directly returning an object
        // We use anonymous functions to make code more compact
        Point MidPoint2(const Point& p2) const;

};

#endif /* POINT_HPP */


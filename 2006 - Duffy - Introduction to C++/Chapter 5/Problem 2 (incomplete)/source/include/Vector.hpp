#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "Point3D.hpp"

class Vector : public Point
{
    private:
        Point pA;
        Point pB;

    public:
        // Constructors
        Vector();
        Vector(const Point& A, const Point& B);
        Vector(const Vector& V);
        virtual ~Vector();

        // Dot and cross products using member functions
        Vector cross(const Vector& vec) const;
        double dot(const Vector& vec) const;

        // Dot and cross products using operator overloading
        Vector operator ^ (const Vector& vec) const;
        double operator % (const Vector& const) const;

};

#endif /* VECTOR_HPP */

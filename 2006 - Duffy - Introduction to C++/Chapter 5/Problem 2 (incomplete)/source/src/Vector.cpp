#include "Vector.hpp"

Vector::Vector() : pA(Point()), pB(Point()) {}
Vector::Vector(const Point& A, const Point& B) : pA(A), pB(B) {}
Vector::Vector(const Vector& V) : pA(V.pA), pB(V.pB) {}
Vector::~Vector() {}

// Dot and cross products using member functions
Vector Vector::cross(const Vector& vec) const
{
    Point temp1 = Point(vec.pA.X() - vec.pB.X(),
                       vec.pA.Y() - vec.pB.Y(),
                       vec.pA.Z() - vec.pB.Z());
    Point temp2 = Point(this->pA.X() - this->pB.X(),
                       this->pA.Y() - this->pB.Y(),
                       this->pA.Z() - this->pB.Z());
    return Vector(Point(), 
        Point(temp1.Y()*temp2.Z() - temp1.Z()*temp2.Y(), 
              temp1.X()*temp2.Z() - temp1.X()*temp2.X(),
              temp1.X()*temp2.Y() - temp1.Y()*temp2.X()));
}


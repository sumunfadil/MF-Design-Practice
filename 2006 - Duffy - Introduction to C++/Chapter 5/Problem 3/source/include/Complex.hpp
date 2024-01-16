#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <iostream>

class Complex
{

private:

    double re;
    double im;

public:

    // Constructors
    Complex();
    Complex(const Complex& c2);
    Complex(double re, double im);
    virtual ~Complex();

    // Addition member function
    Complex add(const Complex& c2) const;

    // Operators
    Complex operator + (const Complex& c2) const;
    Complex operator - (const Complex& c2) const;
    Complex operator * (const Complex& c2) const;
    Complex operator / (const Complex& c2) const;

    // Binary operators - non-member functions of class Complex
    friend Complex operator * (const Complex& c, double d);
    friend Complex operator * (double d, const Complex& c);

    // Assignment operator - deep copy
    Complex& operator = (const Complex& c);

    // Method
    Complex conjugate() const;

    // Print
    void print() const;
};



#endif /* COMPLEX_HPP */

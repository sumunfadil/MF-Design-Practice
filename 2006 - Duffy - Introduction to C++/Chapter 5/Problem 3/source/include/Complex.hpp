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


    // Print
    void print() const;
};



#endif /* COMPLEX_HPP */

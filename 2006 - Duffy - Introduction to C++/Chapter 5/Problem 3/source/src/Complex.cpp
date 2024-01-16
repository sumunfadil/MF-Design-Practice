#include "Complex.hpp"

// Constructors
Complex::Complex() : re(0.0), im(0.0) {}
Complex::Complex(const Complex& c2) : re(c2.re), im(c2.im) {}
Complex::Complex(double re, double im) : re(re), im(im) {}
Complex::~Complex() {}

// Addition
Complex Complex::add(const Complex& c2) const
{
    return Complex(re + c2.re, im + c2.im);
}

// Operators
Complex Complex::operator + (const Complex& c2) const
{
    return Complex(re + c2.re, im + c2.im);
}

Complex Complex::operator - (const Complex& c2) const
{
    return Complex(re - c2.re, im - c2.im);
}

Complex Complex::operator * (const Complex& c2) const
{
    return Complex(re*c2.re - im*c2.im, re*c2.im + im*c2.re);
}

Complex Complex::operator / (const Complex& c2) const
{
    double r = re*re + im*im;
    return Complex(re/r,im/r)*c2.conjugate(); 
}


// Binary operators
// Non-member functions, so no scope resolution operators
Complex operator * (const Complex& c, double d)
{
    return Complex(d*c.re, d*c.im);
}

Complex operator * (double d, const Complex& c)
{
    return Complex(d*c.re, d*c.im);
}

// Assignment operator
Complex& Complex::operator = (const Complex& c)
{
    // Do not assign to yourself
    // If current object (this) and c have same address (&c gives its reference)
    // Return address of current object
    if (this == &c)
        return *this;
    
    re = c.re;
    im = c.im;

    // Return address of current object
    return *this;
}   


// Method
Complex Complex::conjugate() const
{
    return Complex(re, -im);
}

// Print
void Complex::print() const
{
    std::cout << "Complex number: " << re << " + " << im << "i " << std::endl;
}
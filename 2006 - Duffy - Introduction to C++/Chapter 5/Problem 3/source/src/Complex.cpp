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

Complex Complex::operator + (const Complex& c2) const
{
    return Complex(re + c2.re, im + c2.im);
}

// Print
void Complex::print() const
{
    std::cout << "Complex number: " << re << " + " << im << "i " << std::endl;
}
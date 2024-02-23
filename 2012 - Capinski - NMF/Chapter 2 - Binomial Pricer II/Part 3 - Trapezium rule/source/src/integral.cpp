#include "integral.hpp"

DefInt::DefInt(double a_, double b_, double (*func_)(double x))
{
    a = a_;
    b = b_;
    func = func_;
}

double DefInt::Trapezoidal(int N)
{
    double h = (b-a)/N;
    double approx = func(a) + func(a+N*h);

    for (int n=1; n<N; n++)
    {
        approx += 2*func(a + n*h);
    }
    return approx * h * 0.5;
}

double DefInt::Simpson(int N)
{
    return (b-a) * (func(a) + func((a+b)*0.5) + func(b)) / 6;
}
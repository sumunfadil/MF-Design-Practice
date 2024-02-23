#ifndef INTEGRAL_HPP
#define INTEGRAL_HPP

class DefInt
{
    private:
        double a;
        double b;
        double (*func)(double x);
    
    public:
        DefInt(double a_, double b_, double (*func_)(double x));
        
        // Trapezoid approximation
        double Trapezoidal(int N);

        // Simpson approximation (1/3 Simpson's rule)
        double Simpson(int N);
};

#endif /* INTEGRAL_HPP */

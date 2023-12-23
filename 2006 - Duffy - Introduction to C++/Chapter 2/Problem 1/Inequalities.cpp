#include "Inequalities.hpp"

// Implementation

double Max(double x, double y)
{
    return (x>y?x:y); // Ternary operator
}

double Min(double x, double y)
{
    if (x<y)
    {
        return x;
    }
    return y;
}


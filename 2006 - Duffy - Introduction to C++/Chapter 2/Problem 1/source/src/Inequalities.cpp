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

double Max(double x, double y, double z)
{
    return Max(x,y)<z?z:Max(x,y);
}



double Min(double x, double y, double z)
{
    return Min(Min(x,y), z);
}
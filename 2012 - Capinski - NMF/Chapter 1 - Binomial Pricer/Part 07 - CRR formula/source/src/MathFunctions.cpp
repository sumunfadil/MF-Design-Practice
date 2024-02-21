#include "MathFunctions.hpp"
#include <cmath>

int factorial(int n)
{
    return (n == 0 || n == 1) ? 1 : n * factorial(n-1);
}

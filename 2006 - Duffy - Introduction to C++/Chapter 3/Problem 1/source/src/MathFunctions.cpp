#include "MathFunctions.hpp"
#include <cmath>

double N(double x)
{
    return 0.5 * std::erfc(-x / std::sqrt(2));
}


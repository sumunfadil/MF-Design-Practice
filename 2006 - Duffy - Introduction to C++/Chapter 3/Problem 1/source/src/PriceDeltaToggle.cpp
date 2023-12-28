#include "EuropeanOption.hpp"

double EuropeanOption::Price()
{
    if (optType == "C")
    {
        return callPrice();
    }
    else
    {
        return putPrice();
    }
}

double EuropeanOption::Delta()
{
    if (optType == "C")
    {
        return callDelta();
    }
    else
    {
        return putDelta();
    }
}

void EuropeanOption::toggle()
{
    if (optType == "C")
    {
        optType == "P";
    }
    else
    {
        optType == "C";
    }
}


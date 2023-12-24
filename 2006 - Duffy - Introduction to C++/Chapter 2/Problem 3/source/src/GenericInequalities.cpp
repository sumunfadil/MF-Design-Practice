// Guards needed since we use cpp file in test file
#ifndef GENERICINEQUALITIES_CPP
#define GENERICINEQUALITIES_CPP

#include "GenericInequalities.hpp"

// Max and min of two numbers
template <class Numeric>
    Numeric Max(const Numeric& x, const Numeric& y)
    {
        if (x>y)
            return x;
        return y;
    }

template <class Numeric>
    Numeric Min(const Numeric& x, const Numeric& y)
    {
        if (x<y)
            return x;
        return y;
    }

// Max and min of three numbers
template <class Numeric>
    Numeric Max(const Numeric& x, const Numeric& y, const Numeric& z)
    {
        return Max<Numeric>(Max<Numeric>(x,y),z);
    }

template <class Numeric>
    Numeric Min(const Numeric& x, const Numeric& y, const Numeric& z)
    {
        return Min<Numeric>(Min<Numeric>(x,y),z);
    }

#endif /* GENERICINEQUALITIES_HPP */

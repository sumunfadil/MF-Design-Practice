#ifndef GENERICINEQUALITIES_HPP
#define GENERICINEQUALITIES_HPP

// Max and min of two numbers
template <class Numeric>
    Numeric Max(const Numeric& x, const Numeric& y);
template <class Numeric>
    Numeric Min(const Numeric& x, const Numeric& y);

// Max and min of three numbers
template <class Numeric>
    Numeric Max(const Numeric& x, const Numeric& y, const Numeric& z);
template <class Numeric>
    Numeric Min(const Numeric& x, const Numeric& y, const Numeric& z);

#endif /* GENERICINEQUALITIES_HPP */

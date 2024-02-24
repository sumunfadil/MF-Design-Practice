#ifndef DOUBLEDIGITALOPTIONS_HPP
#define DOUBLEDIGITALOPTIONS_HPP

#include "Options06.hpp"

class DoubleDigitalOptions : public EuropeanOption
{
    private:
        double K1;
        double K2;
    
    public:
        int GetInputData();
        double Payoff(double z);
};

#endif /* DOUBLEDIGITALOPTIONS_HPP */

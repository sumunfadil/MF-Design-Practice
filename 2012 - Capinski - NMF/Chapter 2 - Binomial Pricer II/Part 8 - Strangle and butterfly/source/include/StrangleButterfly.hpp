#ifndef STRANGLEBUTTERFLY_HPP
#define STRANGLEBUTTERFLY_HPP

#include "Options06.hpp"

class Strangle : public EuropeanOption
{
    private:
        double K1;
        double K2;
    
    public:
        int GetInputData();
        double Payoff(double z);
};

class Butterfly : public EuropeanOption
{
    private:
        double K1;
        double K2;
    
    public:
        int GetInputData();
        double Payoff(double z);
};

#endif /* STRANGLEBUTTERFLY_HPP */

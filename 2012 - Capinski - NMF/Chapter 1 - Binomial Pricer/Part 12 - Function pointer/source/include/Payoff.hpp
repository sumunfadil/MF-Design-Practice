#ifndef PAYOFF_HPP
#define PAYOFF_HPP

// Call payoff
double CallPayoff(double z, double K);

// Put payoff
double PutPayoff(double z, double K);

// Digital call payoff
double DigitalCallPayoff(double z, double K);

// Digital put payoff
double DigitalPutPayoff(double z, double K);

#endif /* PAYOFF_HPP */

#ifndef OPTIONS04_HPP
#define OPTIONS04_HPP

#include "BinModel02.hpp"

// Input data
int GetInputData(int& N, double& K);

// European option price
double PriceByCRR(BinModel Model, int N, double K,
                  double (*Payoff)(double z, double K));

// Call payoff
double CallPayoff(double z, double K);

// Put payoff
double PutPayoff(double z, double K);

#endif /* OPTIONS04_HPP */

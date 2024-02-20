#ifndef OPTIONS01_HPP
#define OPTIONS01_HPP

/*
    COX-ROSS-RUBENSTEIN (CRR) METHOD
*/

// input data + display
int getInputData(int& N, double& K);

// European option price
double PriceByCRR(double S0, double U, double D, double R, int N, double K);

// Call payoff
double CallPayoff(double z, double K);



#endif /* OPTIONS01_HPP */

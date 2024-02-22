#ifndef OPTIONS03_HPP
#define OPTIONS03_HPP

// Input + display data
int GetInputData(int& N, double& K);

int GetInputData(int& N, double& K1, double& K2);


double PriceByCRR(double S0, double U, double D, 
                  double R, int N, double K1, double K2,
                  double (*Payoff)(double arr[]));

#endif /* OPTIONS03_HPP */


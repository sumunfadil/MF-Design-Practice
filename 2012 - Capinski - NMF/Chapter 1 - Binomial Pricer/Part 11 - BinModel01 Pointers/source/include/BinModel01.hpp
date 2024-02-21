#ifndef BINMODEL01_HPP
#define BINMODEL01_HPP

double riskNeutralProbability(double D, double R, double U);

double S(double S0, double D, double U, int n, int i);

// Old version: pass by reference
//int getInputData(double& S0, double& D, double& R, double& U);

int getInputData(double* S0, double* D, double* R, double* U);




#endif /* BINMODEL01_HPP */

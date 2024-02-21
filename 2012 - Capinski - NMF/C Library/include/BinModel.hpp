#ifndef BINMODEL_HPP
#define BINMODEL_HPP


double RiskNeutralProbability(double D, double R, double U);

double S(double S0, double D, double U, int n, int i);

int GetInputData(double& S0, double& U, double& D, double& R);


#endif /* BINMODEL_HPP */

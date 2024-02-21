#ifndef OPTIONS03_HPP
#define OPTIONS03_HPP

// Input + display data
int GetInputData(int& N, double& K);

// European option price
double PriceByCRR(double S0, double U, double D, 
                  double R, int N, double K,
                  double (*Payoff)(double z, double K));

/*
    - double (*Payoff)(double z, double K) is a function pointer
    - A function is stored in a memory address
    - We can write a pointer that points to that address
    - We need to specify number, type and order of arguments
    - Overloading would still be possible, as long we specify the exact arguments
*/


#endif /* OPTIONS03_HPP */
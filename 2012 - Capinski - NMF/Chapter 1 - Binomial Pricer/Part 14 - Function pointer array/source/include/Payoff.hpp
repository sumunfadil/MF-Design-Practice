#ifndef PAYOFF_HPP
#define PAYOFF_HPP

// Call payoff
double CallPayoff(double arr[]); // less readable especially in implementation

// Put payoff
double PutPayoff(double arr[]);

// Digital call payoff
double DigitalCallPayoff(double arr[]);

// Digital put payoff
double DigitalPutPayoff(double arr[]);


// Double digital option
double DoubleDigitalPayoff(double arr[]);



#endif /* PAYOFF_HPP */

#ifndef OPTIONS02_HPP
#define OPTIONS02_HPP

/*
    USING POINTERS AS ARGUMENTS
    REMEMBER:

        double* Ptr;        // A pointer stores an address
        *Ptr = 1.6          // Access value at address `Ptr` and set it to 1.6
        
        double x;           // Create a double x with address &x
        Ptr = &x            // Now Ptr stores a new address, the address of x (&x)
*/

// Input + display data
int GetInputData(int* PtrN, double* PtrK);

// European option price
double PriceByCRR(double S0, double U, double D, double R, int N, double K);

// Call payoff
double CallPayoff(double z, double K);


#endif /* OPTIONS02_HPP */

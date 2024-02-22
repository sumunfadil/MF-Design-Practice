#ifndef OPTIONS05_HPP
#define OPTIONS05_HPP

#include "BinModel02.hpp"

/***************************************************************
                       EUROPEAN OPTION CLASS
****************************************************************/

class EuropeanOption
{
    private:
        int N;                                  // steps to expiry
        // Arbitrary European payoffs
        double (*Payoff)(double z, double K)    // Pointer to payoff funtion 

    public:
        // Setter   
        void SetN(int N_) {N = N_};             
        void SetPayoff(double (*Payoff_)(double z, double K)) {Payoff = Payoff_};
        
        // European option price
        double PriceByCRR(BinModel Model, double K);
};

/***************************************************************
                            CALL CLASS
****************************************************************/

// Call payoff
double CallPayoff(double z, double K);

// Call class (public inheritance from EuropeanOption)
class Call : public EuropeanOption
{
    private:
        double K;   // Strike price
    public:
        // Default constructor
        Call() {SetPayoff(CallPayoff);} 
        // here function definition is given due to its brevity

        // Getter
        double GetK() {return K;}

        int GetInputData();
};

/***************************************************************
                            PUT CLASS
****************************************************************/

// Put payoff
double PutPayoff(double z, double K);

// Put class
class Put : public EuropeanOption
{
    private:
        double K;   // Strike price
    public:
        // Default constructor
        Put() {SetPayoff(PutPayoff);}

        // Getter
        double GetK() {return K;}

        int GetInputData();
}

#endif /* OPTIONS05_HPP */

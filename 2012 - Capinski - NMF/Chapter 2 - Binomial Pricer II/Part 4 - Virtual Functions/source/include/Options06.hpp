#ifndef OPTIONS06_HPP
#define OPTIONS06_HPP

#include "BinModel02.hpp"

class EuropeanOption
{
    private:
        int N;      // Steps to expiry

    public:
        // Setter (already implemented)
        void SetN(int N_) {N=N_;}

        /*
            Virtual function: 
                - A virtual function can be modified in derived classes
                - If not implemented in derived class, use definition of base class
        */
        virtual double Payoff(double z) {return 0.0;}

        /*
            Pure virtual function:
                - A pure virtual function can be modified in derived classes
                - It is a virtual function with no definition (=0)
                - A class with a pure virtual function is an abstract class
                - Impossible to declare an object of that class 
                  (e.g. EuropeanOption Option1; is not allowed)
        */
        //virtual double Payoff(double z) = 0;

        // European option price
        double PriceByCRR(BinModel Model);
};

class Call : public EuropeanOption
{
    private:
        double K;       // Strike price
    
    public:
        void setK(double K_) {K=K_;}
        int GetInputData();

        // Modify virtual function in derived class
        double Payoff(double z);

};

class Put : public EuropeanOption
{
    private:
        double K;       // Strike price
    
    public:
        void setK(double K_) {K=K_;}
        int GetInputData();

        // Modify virtual function in derived class
        double Payoff(double z);

};


#endif /* OPTIONS06_HPP */

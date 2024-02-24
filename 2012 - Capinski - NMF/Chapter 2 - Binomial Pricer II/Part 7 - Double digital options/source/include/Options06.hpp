#ifndef OPTIONS06_HPP
#define OPTIONS06_HPP

#include "BinModel02.hpp"

// EuropeanOption is an abstract class 
class EuropeanOption
{
    private:
        int N;      // Steps to expiry

    public:
        // Setter (already implemented)
        void SetN(int N_) {N=N_;}

        // Pure virtual function
        virtual double Payoff(double z) = 0;

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

class BullSpread : public EuropeanOption
{
    private:
        // K1 < K2
        double K1;
        double K2;

    public:
        void setK1(double K1_) {K1 = K1_;}
        void setK2(double K2_) {K2 = K2_;}
        int GetInputData();

        // Modify virtual function
        double Payoff(double z);
};

class BearSpread : public EuropeanOption
{
    private:
        // K1 < K2 (put check functions if needed)
        double K1;
        double K2;

    public:
        void setK1(double K1_) {K1 = K1_;}
        void setK2(double K2_) {K2 = K2_;}
        int GetInputData();

        // Modify virtual function
        double Payoff(double z);
};

#endif /* OPTIONS06_HPP */

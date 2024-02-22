#ifndef BINMODEL02_HPP
#define BINMODEL02_HPP

class BinModel
{
private:
    double S0;
    double U;
    double D;
    double R;

public:
    // Risk-neutral probability
    double RiskNeutralProbability();

    // Stock price at node (n,i) i.e. S(n,i)
    double S(int n, int i);

    // Input and check data
    int GetInputData();

    // Getter
    double getR();
};


#endif /* BINMODEL02_HPP */

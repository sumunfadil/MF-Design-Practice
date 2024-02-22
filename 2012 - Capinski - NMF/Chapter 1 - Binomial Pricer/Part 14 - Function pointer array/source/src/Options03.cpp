#include "Options03.hpp"
#include "BinModel01.hpp"
#include <iostream>
#include <cmath>

using namespace std;

int GetInputData(int& N, double& K) 
{
    cout << "Enter steps to expiry N: "; cin >> N;  
    cout << "Enter strike price K: "; cin >> K;   
    cout << endl;

    return 0;
}

int GetInputData(int& N, double& K1, double& K2) 
{
    cout << "Enter steps to expiry N: "; cin >> N;  
    cout << "Enter strike price K1: "; cin >> K1;  
    cout << "Enter strike price K2: "; cin >> K2;   
    cout << endl;

    return 0;
}

double PriceByCRR(double S0, double U, double D, 
                  double R, int N, double K1, double K2,
                  double (*Payoff)(double arr[]))
{
    double q = riskNeutralProbability(D, R, U);
    double Price[N+1];  

    for (int i=0; i<=N; i++)
    {
        // Calculate payoff at time N for each state
        double arr[] = {S(S0,D,U,N,i), K1, K2};
        Price[i] = Payoff(arr); // Replace by function pointer Payoff
    }

    // Perform a backwards recursion from n=N-1 to N=0
    for (int n=N-1; n>=0; n--)
    {
        for (int i=0; i<=n; i++)
        {
            Price[i] = (q*Price[i+1] + (1-q)*Price[i])/(1+R);             
        }
    }

    return Price[0]; 

}


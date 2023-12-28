#include "EuropeanOption.hpp"
#include <iostream>

// Helper functions

void EuropeanOption::init()
{
    // Initialise default values
    double r = 0.08;      
    double sig = 0.30;    
    double K = 65.0;      
    double T = 0.25;      
    double U = 60.0;            // U is stock price  
    double b = r;               // Black-Scholes model (1973)
    string optType = "C";       // European Call option
}

void EuropeanOption::copy(const EuropeanOption& o2)
{
    // Copy an EuropeanOption object
    r = o2.r;
    sig = o2.sig;
    K = o2.K;
    T = o2.T;
    U = o2.U;
    b = o2.b;
    optType = o2.optType;
}

// Constructors

EuropeanOption::EuropeanOption()
{
    // Default constructor
    init();
}

EuropeanOption::EuropeanOption(const EuropeanOption& option2)
{
    // Copy constructor
    copy(option2);
}

EuropeanOption::EuropeanOption(const string& optionType)
{
    init();
    optType = optionType;
}

// Destructor

EuropeanOption::~EuropeanOption()
{
    std::cout << "Destructor called!" << std::endl;
}

// Assignment operator

EuropeanOption& EuropeanOption::operator = (const EuropeanOption& option2)
{
    // Deep copy
    if (this == &option2) return *this;

    copy(option2);
    return *this;
}






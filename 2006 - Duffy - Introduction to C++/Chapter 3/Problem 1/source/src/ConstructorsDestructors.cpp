#include "EuropeanOption.hpp"
#include <iostream>

// Helper functions

void EuropeanOption::init()
{
    // Initialise default values
    r = 0.08;      
    sig = 0.30;    
    K = 65.0;      
    T = 0.25;      
    U = 60.0;            // U is stock price  
    b = r;               // Black-Scholes model (1973)
    optType = "C";       // European Call option
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
    //cout << "Default constructor called!" << endl;
    init();
}

EuropeanOption::EuropeanOption(const EuropeanOption& option2)
{
    // Copy constructor
    //cout << "Copy constructor called!" << endl;
    copy(option2);
}

EuropeanOption::EuropeanOption(const string& optionType)
{
    //cout << "Constructor called!" << endl;
    init();
    optType = optionType;
}

// Destructor

EuropeanOption::~EuropeanOption()
{
    //std::cout << "Destructor called!" << std::endl;
}

// Assignment operator

EuropeanOption& EuropeanOption::operator = (const EuropeanOption& option2)
{
    // Deep copy
    if (this == &option2) return *this;

    copy(option2);
    return *this;
}





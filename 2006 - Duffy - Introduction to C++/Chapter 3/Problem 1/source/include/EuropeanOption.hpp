#ifndef EUROPEANOPTION_HPP
#define EUROPEANOPTION_HPP

#include <string>
#include <cmath>
#include "MathFunctions.hpp"
using namespace std;

class EuropeanOption
{
    private:

        void init();                             // Initialise default values
        void copy(const EuropeanOption& o2);     // Copy an instance or object of this class

        // Option calculations
        double callPrice() const;
        double putPrice() const;
        double callDelta() const;
        double putDelta() const;

    public:

        // Public data members
        double r;           // Interest rate
        double sig;         // Volatility
        double K;           // Strike price
        double T;           // Expiry date
        double U;           // Current underlying price
        double b;           // Cost of carry
        string optType;     // Option type

    public:

        // Constructors
        EuropeanOption();                                  // Default constructor (call)
        EuropeanOption(const EuropeanOption& option2);     // Copy constructor
        EuropeanOption(const string& optionType);          // Initialise with option type

        // Destructor
        virtual ~EuropeanOption();

        // Assignment operator
        EuropeanOption& operator = (const EuropeanOption& option2);

        // Option price and delta
        double Price();
        double Delta();

        // Modifier function (change option type)
        void toggle(); 

};

#endif /* EUROPEANOPTION_HPP */

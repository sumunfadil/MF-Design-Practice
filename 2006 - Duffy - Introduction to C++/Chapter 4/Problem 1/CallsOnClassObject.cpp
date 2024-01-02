#include <iostream>

using namespace std;

class SampleClass
{
public: 
    // For convenience - avoid the need for getters and setters
    // Data (array) created at compile time
    double contents[1000];

public:
    // Constructor
    SampleClass(double d)
    {
        cout << "SampleClass instance/object being created\n";

        // Populate array with value 'd'
        for (int i=0; i < 1000; i++)
        {
            contents[i] = d;
        }
    }

    // Destructor
    virtual ~SampleClass()
    {
        cout << "SampleClass instance/object being deleted\n";
    }
};

/*
Global functions
*/

// Call-by-value
double Sum(SampleClass myClass)
{
    // Sum() adds elements of class instance (myClass) in call-by-value manner
    double result = myClass.contents[0];
    for (int i = 1; i < 1000; i++)
    {
        result += myClass.contents[i];
    }
    return result;
}

// Call-by-reference
double Sum2(SampleClass& myClass)
{
    // Sum2() works directly on sc in a call-by-reference manner
    double result = myClass.contents[0];
    for (int i = 1; i < 1000; i++)
    {
        result += myClass.contents[i];
    }
    return result;
}

// Using pointers as input parameters to functions
// Old syntax - not advisable to use it
double Sum3(SampleClass* myClass);

// Constant reference
double Sum4(const SampleClass& myClass)
{
    // Sum4() works directly on sc in a call-by-reference manner
    // Not possible to modify myClass
    double result = myClass.contents[0];
    for (int i = 1; i < 1000; i++)
    {
        result += myClass.contents[i];
    }
    return result;
}

int main()
{
    SampleClass sc(1.0);
    double sum = Sum(sc); // Function works on a copy of sc - destructor called for a second time
    double sum2 = Sum2(sc); // Function works directly on sc
    double sum4 = Sum4(sc); // Function works directly on sc and sc unchanged

    cout << "Call-by-value - Sum(): " << sum << endl;
    cout << "Call-by-reference - Sum2(): " << sum2 << endl;
    cout << "Call-by-const-reference - Sum4(): " << sum4 << endl;

    return 0;
}



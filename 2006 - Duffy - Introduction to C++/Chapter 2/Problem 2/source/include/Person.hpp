#ifndef PERSON_HPP
#define PERSON_HPP

#include "datasimdate.hpp"
#include <string>

using namespace std;

class Person
{
    public:
        // Data
        string nam;
        DatasimDate dob;
        DatasimDate createdD;
    public:
        Person(const string& name, const DatasimDate& DateofBirth);
        void print() const;
        int age() const;
};

#endif /* PERSON_HPP */

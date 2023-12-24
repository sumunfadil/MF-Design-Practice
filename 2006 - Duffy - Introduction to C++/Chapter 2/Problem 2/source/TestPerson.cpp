#include "datasimdate.hpp"
#include "Person.hpp"
#include <string>
using namespace std;

int main()
{
    DatasimDate myBithday(29,8,1952);
    string myName("Tom A. Edwards");
    Person te(myName, myBithday);
    te.print();

    DatasimDate bBirthday(06,8,1994);
    string bName("Des B. Edwards");
    Person de(bName, bBirthday);
    de.print();

    return 0;
}
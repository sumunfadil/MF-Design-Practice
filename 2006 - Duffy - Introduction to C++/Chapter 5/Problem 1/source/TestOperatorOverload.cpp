#include "datasimdate.hpp"
#include <iostream>

using namespace std;

int main()
{
    // Date format: dd/mm/yy
    DatasimDate fixed(1, 1, 94);
    DatasimDate current(1, 1, 94);
    int interval = 30;

    // Generate many dates
    for (int i = 0; i < 12; i++)
    {
        current = fixed - (i * interval);
        cout << current << endl;
    }

    // Add and subtract periods to dates
    cout << "\nOffset dates:\n";
    DatasimDate today;
    cout << "Today: " << today << endl;

    // Add period
    DatasimDate d3 = today.add_quarter();
    DatasimDate d4 = today.add_halfyear();
    cout << "\nAdd dates:\n";
    cout << d3 << endl;
    cout << d4 << endl;

    // Subtract period
    cout << "\nSubtract dates:\n";
    d3 = d3.sub_quarter();
    d4 = d4.sub_halfyear();
    cout << d3 << endl;
    cout << d4 << endl;

    return 0;
}


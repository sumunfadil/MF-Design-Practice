#include <iostream>

using namespace std;

void interchange(double& a, double& b)
{
    double temp;
    temp = a;
    a = b;
    b = temp;
}

void bubblesort(double arr[])
{
    int N = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < N-1; i++)
    {
        for (int j = 0; j < N-i; j++)
        {
            if (arr[j] > arr[j+1]) interchange(arr[j], arr[j+1]);
        }
    }
}

void printArray(double arr[])
{
    int N = sizeof(arr) / sizeof(arr[0]);
    int i;
    for (i = 0; i < N; i++)
        cout << " " << arr[i];
}

int main()
{
    double a = 1.5; double b = 5.5;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Calling interchange(): \n";
    interchange(a,b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    double arr[] = { 64, 34, 25, 12, 22, 11, 90};
    printArray(arr);
    bubblesort(arr);
    printArray(arr);


    return 0;
}
#include <iostream>

using namespace std;

// Passing by pointers
void swap(double* PtrA, double* PtrB) // PtrA and PtrB store addresses
{
    double temp;
    temp = *PtrA;   // Access value at address PtrA and assign value to temp
    *PtrA = *PtrB;  // Access value at address PtrB and assign to value at address PtrA
    *PtrB = temp;   // Set value at address PtrB to temp
}

void printArray(double arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    
    cout << endl;
}

void bubblesort(double arr[], int N)
{
    bool swapped;
    for (int i = 0; i < N-1; i++)
    {
        swapped = false;

        for (int j = 0; j < N-i-1; j++)
        {
            if (arr[j] > arr[j+1]) swap(&arr[j], &arr[j+1]); // Pass reference
            swapped = true;
        }

        if (swapped == false) break;
    } 

}


int main()
{
    double a = 1.5; double b = 5.5;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Calling interchange(): \n";
    swap(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    double arr[] = { 64, 34, 25, 12, 22, 11, 90};
    cout << "Before bubblesort: " << endl;
    printArray(arr, 7);
    bubblesort(arr, 7);
    cout << "After bubblesort: " << endl;
    printArray(arr, 7);

    return 0;
}
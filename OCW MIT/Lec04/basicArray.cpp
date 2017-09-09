/*
 *
 * Demo of a basic array in C++
 *
 */

#include <iostream>

#include "lec04.h"

using namespace std;

int main(void)
{
    int n = 5, array[n];

    cout << "Enter 5 integers of your choice: " << endl;
    for (int i = 0; i < n; i++)
        cin >> array[i];

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " + ";
    }
    cout << "0 = " << sumArray(array, n) << endl;

    return 0;
}

int sumArray(int arr[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; sum += arr[i++]);
    return sum;
}

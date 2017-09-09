// By: Aditya Patgaonkar.
// Date: 28.09.2016
// Exercise Q 5.

#include <iostream>
#include <cmath>
#include <string>

#include "googleC++.h"

using namespace std;

bool checkNum(int, int,  int arr[]);
int reverseNum(int, int,  int arr[]);

int main(void)
{
    cout << "Enter a 3 digit number: ";
    int magicNo = GetInputInt(); int magicArr[3];

    if (checkNum(magicNo, 3, magicArr))
        exit(1);

    int magicNoRev = reverseNum(magicNo, 3, magicArr);

    int magicNo2 = magicNo - magicNoRev;

    int magicNo2Rev = reverseNum(magicNo2, 3, magicArr);

    cout << magicNo2 + magicNo2Rev << endl;

    return 0;
}

bool checkNum(int x, int n,  int arr[])
{
    for (int  i = 0; i < n; i++)
    {
        arr[i] = x % 10;
        x /= 10;
    }
    if (arr[0] > arr[n - 1])
    {
        cout << "The number isn't valid my friend." << endl;
        return true; // Number is not valid.
    }
    return false;
}

int reverseNum(int x, int n, int arr[])
{
    for (int  i = 0; i < n; i++)
    {
        arr[i] = x % 10;
        x /= 10;
    }

    for (int i = 0, j = n - 1; i < n; i++)
        arr[i] = arr[i] * pow(10, j--);

    int retNum = 0;
    for (int i = 0; i < n; i++)
        retNum += arr[i];
    return retNum;
}

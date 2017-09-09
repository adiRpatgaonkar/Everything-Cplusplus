// By: Aditya Patgaonkar.
// Date: 28.09.2016
// Exercise Q 6. Not working for certain inputs. Check ASAP!

#include <iostream>
#include <cmath>
#include "googleC++.h"

using namespace std;

int BCA(int, int, int arr[]);
int CAB(int, int, int arr[]);
void swap(int*, int*);

int main(void)
{
    cout << "Enter a number: ";
    int arrayNum[3];
    int abc = GetInputInt();
    int bca = BCA(abc, 3, arrayNum);
    int cab = CAB(abc, 3, arrayNum);
    cout << bca << endl << cab << endl;

    int x = abc % 11; int y = bca % 11; int z = cab % 11;

    int sum1 = x + y; int sum2 = y + z; int sum3 = z + x;
    cout << sum1 << " " << sum2 << " " << sum3 << endl;

    if ( (sum1 % 2) != 0 )
    {
        if ( sum1 == 9 )
        {
            cout << "Sum is 9" << endl;
            exit(0);
        }
        else if ( (sum1 + 11) >= 0 && (sum1 + 11) < 20 )
            sum1 += 11;
        else if ( (sum1 + 11) >= 0 && (sum1 + 11) < 20 )
            sum1 -= 11;

    }


    if ( (sum2 % 2) != 0 )
    {
        if ( sum2 == 9 )
        {
            cout << "Sum is 9" << endl;
            exit(0);
        }
        else if ( (sum2 + 11) >= 0 && (sum2 + 11) < 20 )
            sum2 += 11;
        else if ( (sum2 + 11) >= 0 && (sum2 + 11) < 20 )
            sum2 -= 11;
    }


    if ( (sum3 % 2) != 0 )
    {
        if ( sum3 == 9 )
        {
            cout << "Sum is 9" << endl;
            exit(0);
        }
        else if ( (sum3 + 11) >= 0 && (sum3 + 11) < 20 )
            sum3 += 11;
        else if ( (sum3 + 11) >= 0 && (sum3 + 11) < 20 )
            sum3 -= 11;
    }



    cout << sum1/2 << " " << sum2/2 << " " << sum3/2 << endl;


    return 0;
}

int BCA(int x, int n, int arr[])
{
    for (int  i = 0; i < n; i++)
    {
        arr[i] = x % 10;
        x /= 10;
    }

    swap(arr[0], arr[1]);

    for (int i = 0, j = n - 1; i < n; i++)
        arr[i] = arr[i] * pow(10, j--);

    int retNum = 0;
    for (int i = 0; i < n; i++)
        retNum += arr[i];
    return retNum;
}

int CAB(int x, int n, int arr[])
{
    for (int  i = 0; i < n; i++)
    {
        arr[i] = x % 10;
        x /= 10;
    }

    swap(arr[1], arr[2]);

    for (int i = 0, j = n - 1; i < n; i++)
        arr[i] = arr[i] * pow(10, j--);

    int retNum = 0;
    for (int i = 0; i < n; i++)
        retNum += arr[i];
    return retNum;
}


void swap(int* a, int* b)
{
    *a += *b;
    *b = *a - *b;
    *a = *a - *b;
    return;
}

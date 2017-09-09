// By: Aditya Patgaonkar.
// Date: 28.09.2016
// Exercise Q 2.

#include <iostream>
#include "googleC++.h"

using namespace std;

int CalcHours(int );
int CalcMin(int );
void CalcSec(int );

int main(void)
{
    cout << "Enter the seconds on the stopwatch: ";
    int seconds = GetInputInt();

    int x = CalcHours(seconds);
    int y = CalcMin(x);
    CalcSec(y);

    return 0;
}


int CalcHours(int sec)
{
    int hours  = sec / 3600;
    cout << "Hours: " << hours << endl;

    return sec % 3600;
}

int CalcMin(int sec)
{
    int min = sec / 60;
    cout << "Minutes: " << min << endl;

    return sec % 60;
}

void CalcSec(int sec)
{
    cout << "Seconds: " << sec << endl;

    return;
}

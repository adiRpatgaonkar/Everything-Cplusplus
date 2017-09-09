#include <iostream>

#include "lec03.h"

using namespace std;

int main(void)
{
    int divid, divis, remain, quot;

    cout << "Please type a dividend and divisor: ";
    cin >> divid >> divis;

    quot = divide(divid, divis, remain);

    cout << divid << " = " << divis << " * " << quot << " + " << remain << endl;
}

int divide(int x, int y, int &r)
{
    r = x % y;
    return x / y;
}

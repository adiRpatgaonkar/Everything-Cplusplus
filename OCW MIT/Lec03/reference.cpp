#include <iostream>

#include "lec03.h"

using namespace std;

int main(void)
{
    int x;
    cout << "Please give an integer: ";
    cin >> x;
    cout << "In main: x = " << x << endl;

    valuePass(x);
    cout << "In valuePass: x = " << x << endl;

    referencePass(x);
    cout << "In referencePass: x = " << x << endl;
}

void referencePass(int &n)
{
    n = -1;
}

void valuePass(int n)
{
    n = -1;
}

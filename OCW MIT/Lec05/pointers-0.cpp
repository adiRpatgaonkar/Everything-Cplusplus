/*
 *
 * Pointer experiments
 *
 */

#include <iostream>

#include "lec04.h"

using namespace std;

int main(void)
{
    int* x = retPoint();
    cout << x << " --> " << *x << endl;

    return 0;
}

int* retPoint()
{
    int n = 134;
    int* np = &n;
    cout << np << " --> " << *np << endl;
    return np;
}

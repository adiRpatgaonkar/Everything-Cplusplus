/*
 *
 * Function overloading demo
 *
 */

#include <iostream>

#include "lec03.h"

using namespace std;

int main(void)
{
    cout << "Enter the value(s) please: \n";
    int a;
    cin >> a;
    showMe(a);

    return 0;
}

void showMe(int x)
{
    cout << "Integer a = " << x << endl;
    return;
}

void showMe(char* x)
{
    cout << "String a = " << x << endl;
    return;
}

/*
 *
 * DEMO: Const pointers.
 *
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int x = 2;

    // Const pointer i.e. address stored in p cannot be changed once initialized!
    int* const p = &x;
    cout << p << " --> "<< *p << endl;
    int y = 4;
    *p = 40; // OK
    // p = &y; // ERROR

    // Const *pointer i.e. value at address in q is contant once initialized (read-only).
    const int* q = &y;
    cout << q << " --> " << *q << endl;
    q = &x; // OK
    // *q = 6; // ERROR


    // Const pointer and *pointer
    int z = 6;
    const int* const r = &z;
    cout << r << " --> " << *r << endl;
    // *r = 7; // ERROR
     // r = &y; // ERROR

    return 0;
}

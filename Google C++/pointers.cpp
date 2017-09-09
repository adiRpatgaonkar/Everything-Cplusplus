// AdityaRP: Sept 6/16
// Something's wrong! Correct ASAP.
#include <iostream>

using namespace std;

int main(void)
{
    int *p = nullptr;

    cout << p << endl;
    cout << r << endl;

    int x = 18;
    int y = 20;

    p = &x;
    int& r = 12;

    cout << p << endl;
    cout << r << endl;

    return 0;
}

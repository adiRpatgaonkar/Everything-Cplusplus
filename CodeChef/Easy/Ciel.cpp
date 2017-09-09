// By: Aditya Patgaonkar
// Date: 19.11.2016
// Ciel and A-B problem.
// Had to take help, because of the MOST SILLY IGNORANCE !!!!!!
// OVERCONFIDENCE !!!!!!
#include <iostream>

using namespace std;

int main()
{
    long a = 0, b = 0;
    cin >> a >> b;
    if (b <= 0 || a <= b || a > 10000) return 1;
    else if ((a - b + 1) % 10 == 0) cout << a - b - 1 << endl; /* Important */
    else cout << a - b + 1 << endl;
    return 0;
}

// By: Aditya Patgaonkar
// Date: 27.10.2016
// Demonstrate usage of references in C++.

#include <iostream>
#include "googleC++.h"

using namespace std;

class sprinterRelay {
    int sprinterID1, sprinterID2;
public:
    sprinterRelay()
    {
        sprinterID1 = -1;
        sprinterID2 = -1;
    }
    void SetSprinterID(int x, int y)
    {
        sprinterID1 = x; sprinterID2 = y;
        return;
    }
    void GetSprinterID()
    {
        cout << "Sprinter 1 : " << sprinterID1 << endl << "Sprinter 2 : " << sprinterID2 << endl;
        return;
    }
    friend void SwapIDs(sprinterRelay &o);
};

void SwapIDs(sprinterRelay &o)
{
    int tmp = o.sprinterID1;
    o.sprinterID1 = o.sprinterID2;
    o.sprinterID2 = tmp;
}

int main()
{
    cout << "ID of Sprinter 1 : ";
    int a = GetInputInt();
    cout << "ID of Sprinter 2 : ";
    int b = GetInputInt();
    sprinterRelay r1;
    r1.SetSprinterID(a, b);

    r1.GetSprinterID();

    SwapIDs(r1);

    r1.GetSprinterID();

    return 0;
}

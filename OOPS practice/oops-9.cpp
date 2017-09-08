// By: Aditya Patgaonkar
// Date: 28.10.2016
// Demonstrate usage of dynamic allocation operators

#include <iostream>
#include <cstdlib>

using namespace std;

class sprinterRelay {
    int sprinterID1, sprinterID2;
public:
    sprinterRelay(int x, int y)
    {
        sprinterID1 = x;
        sprinterID2 = y;
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

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        cout << "Usage: ./oops-9 int" << endl;
        return 1;
    }

    int* p;

    try
    {
        p = new int (atoi(argv[1]));
    }catch (bad_alloc xa) {
        cout << "Allocation failure" << endl;
        return 2;
    }
    cout << *p << endl;
    delete p;

    try
    {
        sprinterRelay *s1 = new sprinterRelay(10, 20);
        s1->GetSprinterID();
    }catch (bad_alloc xa) {
        cout << "Allocation failure" << endl;
        return 2;
    }
    return 0;
}

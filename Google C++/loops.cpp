// AdityaRP: Sept 6/16
// Demonstrate the loops of C++! Improvements man.

#include <iostream>

using namespace std;

int main(void)
{
    int x[] = {1, 2, 4, 7, 2, 6, 3, 2, 2, 6, 8};

    for(auto i:x)
    {
        cout << i << " ";
    }
    cout << endl;

    for(auto& i:x)
    {
        cout << i++ << " ";
    }
    cout << endl;

    return 0;
}

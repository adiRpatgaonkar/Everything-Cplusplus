// Aditya.R.Patgaonkar
// 9.9.2016
// Illustrate: Multiplication tables.

#include <iostream>

using namespace std;

int main(void)
{
    cout << "\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10" << endl;

    for (int x = 0; x < 10; x++)
    {
        cout << x + 1 << " |\t" ;
        for (int y = 0; y < 10; y++)
            cout << (x + 1) * (y + 1)  << "\t";
        cout << endl;    
    }

    cout << endl << "All done!" << endl;
}
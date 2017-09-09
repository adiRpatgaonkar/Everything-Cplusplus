// By: Aditya Patgaonkar. Referred Google's solution.
// Date: 14.09.2016
// Trial and error puzzle.
#include <iostream>

using namespace std;

int main(void)
{
    for(int h = 0; h < 100; h++)
    {
        for(int p = 0; p < 100; p++)
        {
            for(int r = 0; r < 100; r++)
            {
                if (h + p + r == 100)
                    if ( (h * 10 + p * 3 + r * 0.50) == 100 )
                        cout << "Found it." << endl << "Horses: " << h << endl << "Pigs: " << p << endl << "Rabbits: " << r << endl << endl;
            }
        }
    }

    return 0;
}

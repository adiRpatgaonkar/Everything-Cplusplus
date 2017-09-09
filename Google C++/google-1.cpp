// Aditya.R.Patgaonkar
// 8.9.2016
// Illustrate: Input checking. (Destructive) 
#include <iostream>

using namespace std;

int main(void)
{
    int in_c = 0;


    do
    {
        cout << "Input an integer or input -1 to exit: ";
        
        if( !(cin >> in_c) )
        {
            cout << "Invalid input buddy. Exiting..." << endl;
            break;
        }

        cout << "Your input was " << in_c << "." << endl;
    }
    while(in_c != -1);

    cout << "All done" << endl;
}
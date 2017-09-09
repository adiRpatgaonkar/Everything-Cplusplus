// Aditya.R.Patgaonkar
// 9.9.2016
// Illustrate: Input checking (Non-destructive). 
#include <iostream>
#include <limits>

using namespace std;

int main(void)
{
    int in_c = 0;


    do
    {
        cout << "Input an integer or input -1 to exit: ";
        
        if( !(cin >> in_c) )
        {
            cout << "Invalid input buddy." << endl;

            // Clears any error in cin
            cin.clear();

            // Ignores any input on the same line as the error input i.e skips them onto the next line.
            // Skips the max length of the stream.
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Ignore the remaining statements of the loop and continues onto the next iteration!
            continue;
        }

        // In case the input is correct.
        cout << "Your input was " << in_c << "." << endl;
    }
    while(in_c != -1);

    // Fir milte hai!
    cout << "All done" << endl;
}
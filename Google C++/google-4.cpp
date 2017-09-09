// Aditya.R.Patgaonkar
// 9.9.2016
// Illustrate: Guessing game.
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <limits>

using namespace std;

int main(void)
{
    srand(time(NULL));
    cout << "Start guessing buddy (Number between 1 and 100): " << endl;

    int guess = 0;
    // THE number.
    int answer = (rand() % 100) + 1;
    int tries = 0;
    do
    {
        cout << endl << "Enter your guess or a 0 or less to exit: " << endl;
        // Checking validitity of input.
        if ( !(cin >> guess) || guess > 100 )
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Enter a valid number dude." << endl;
            continue;
        }
        // Exit if user inputs anything lesser than 1
        else if (guess <= 0)
        {
            cout << endl << "OK. Exiting..." << endl;
            break;
        }   
        // Guessed number is greater than the answer.
        else if (guess > answer)
            cout << "Lesser my friend :)" << endl;
        // Guessed number is lesser than the answer.
        else if (guess < answer)
            cout << "Greater my friend :)" << endl;
        // Guessed number is equal to the answer.
        else
        {
            cout << endl << "Congratulations!" << endl;
            --tries;
        }   
        cout << "Number of attempts are " << ++tries << endl;                          
    }
    while (answer != guess || guess <= 0);

    cout << endl << "All done." << endl;
}
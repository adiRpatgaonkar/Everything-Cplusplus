// By: Aditya Patgaonkar.
// Date: 28.09.2016
// Exercise Q 6.

#include <iostream>
#include <ctype.h>

using namespace std;

int main(void)
{
    const string monthArray[] = {"Jan", "Feb", "March", "April", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
    const int yearBase = 1995;
    const char base1 = 'A', base2 = 'Q';

    cout << "Enter the encoded expiry date: ";
    char expDate[4];
    cin.getline(expDate, 5);
    for (int i = 0; i < 4; i++)
    {
        if( isalpha(expDate[i]) )
            expDate[i] = toupper(expDate[i]);
        else
        {
            cout << "Invalid input/encoding." << endl;
            return 1;
        }
    }

    if (expDate[0] >= 'A' && expDate[0] <= 'L')
    {
        if (expDate[1] >= 'Q' && expDate[1] <= 'Z')
        {
            if (expDate[2] >= 'Q' && expDate[1] <= 'Z')
            {
                if (expDate[1] >= 'A' && expDate[1] <= 'Z')
                {
                    int month = (int)expDate[0] - (int)base1;
                    cout << "Month: " << monthArray[month] << endl;

                    int date1 = (int)expDate[1] - (int)base2; date1 %= 10;
                    int date2 = (int)expDate[2] - (int)base2; date2 %= 10;
                    cout << "Date: "<< date1 << date2 << endl;

                    int year = (int)expDate[3] - (int)base1;
                    year += yearBase;
                    cout << "Year: " << year << endl;
                }
                else
                    cout << "Invalid encoding!" << endl;
            }
            else
                cout << "Invalid encoding!" << endl;
        }
        else
            cout << "Invalid encoding!" << endl;
    }
    else
        cout << "Invalid encoding!" << endl;

    return 0;
}

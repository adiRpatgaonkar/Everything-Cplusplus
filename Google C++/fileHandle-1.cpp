// By: Aditya Patgaonkar.
// Date: 27.09.2016
// ** Incomplete ** Do FILE I/O from Herbert Schidlt.

#include <iostream>
#include <fstream>
#include "googleC++.h"

using namespace std;

fstream SongTags;

int main(void)
{
    cout << "How many songs: ";
    int n = GetInputInt();
    cout << "Enter the records of your song: " << endl;

    char track[50], album[50], albumArtist[50], genre[20], year[4];

    for (int i = 0; i < n; i++)
    {
        cout << "Soundtrack " << i << endl;

        cout << "Soundtrack name: ";
        cin >> track;

        cout << "Album name: ";
        cin >> album;

        cout << "Album Artist: ";
        cin >> albumArtist;

        cout << "Genre: ";
        cin >> genre;

        cout << "Year: ";
        cin >> year;

        // Write
        SongTags.open("SongMETA.txt", ios::out);
        SongTags << "\t:Soundtrack " << i << ":" << endl;
        SongTags << "Soundtrack name: " << track << endl << "Album name: " << album << endl << "Album Artist" << albumArtist << endl << "Genre: " << genre << endl << "Year: " << year << endl;
    }
    SongTags.close();

    for (int i = 0; i < n; i++)
    {
        // Read
        ifstream SongTagsI("SongMETA.txt");
        string data;
        while ( getline(SongTagsI, data) )
            cout << data << '\n';

        /*
        SongTags >> track >> album >> albumArtist >> genre >> year;
        if (SongTags.eof())
            SongTags.close();*/

        // Display
        //cout << "\t:Soundtrack " << i << ":" << endl;
        //cout << "Soundtrack name: " << track << endl << "Album name: " << album << endl << "Album Artist" << albumArtist << endl << "Genre: " << genre << endl << "Year: " << year << endl;
    }
    SongTags.close();

    return 0;
}

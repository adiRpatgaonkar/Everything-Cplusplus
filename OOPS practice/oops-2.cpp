// By: Aditya Patgaonkar.
// Date: 11.10.2016
// Demonstrate usage of classes, friends.
// Took a hell lot of time!

#include <iostream>
#include "googleC++.h"

using namespace std;

// Music player.
#define SONG_ON 1
#define SONG_OFF 0

class S2;

class S1{
    int status;
public:
    void SetStatus(int state);
    void SongStatus(S2 a);
};

class S2{
    int status;
public:
    void SetStatus(int state);
    friend void S1::SongStatus(S2 a);
};

void S1::SongStatus(S2 a)
{
    if (status || a.status)
        cout << "Song is on." << endl;
    else
        cout << "No song is being played." << endl;
        return;
}
void S1::SetStatus(int state)
{
    status = state;
    return;
}
void S2::SetStatus(int state)
{
    status = state;
    return;
}


int main()
{
    S1 x; S2 y;
    int status = -1;
    do
    {
        cout << "Set the status of the song 1: " << endl;
        /* code */
        status = GetInputInt();
    }
    while(status != 0 && status != 1);
    x.SetStatus(status);
    status = -1;
    do
    {
        cout << "Set the status of the song 2: " << endl;
        /* code */
        status = GetInputInt();
    }
    while(status != 0 && status != 1);
    y.SetStatus(status);

    x.SongStatus(y);

    return 0;
}

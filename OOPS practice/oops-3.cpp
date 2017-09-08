// By: Aditya Patgaonkar.
// Date: 16.10.2016
// Demonstrate usage of friend classes.

#include <iostream>
#include "googleC++.h"

using namespace std;

class FootballPlayer{
    char fName[50]; int age;
public:
    friend class CricketPlayer;
    FootballPlayer(int a, char* n);
};

class CricketPlayer{
    char cName[50]; int age;
public:
    CricketPlayer(int a, char* n);
    void ElderPlayer(FootballPlayer x, CricketPlayer y);
};

FootballPlayer::FootballPlayer(int a, char* n)
{
    strcpy(name, n);
    age = a;
}

CricketPlayer::CricketPlayer(int a, char* n)
{
    strcpy(name, n);
    age = a;
}

void CricketPlayer::ElderPlayer(FootballPlayer x, CricketPlayer y)
{
    cout << (x.age > y.age ? x.age : y.age) << endl;
}



int main()
{
    char name[50];
    cout << "Name of player: " << endl;

    FootballPlayer barca(30, fName);
    CricketPlayer ind(30, "MSD");
    ind.ElderPlayer(barca, cName);

    return 0;
}


// By: Aditya Patgaonkar.
// Date: 11.10.2016
// Demonstrate usage of classes, friends, inheritance.
// Took a hell lot of time!

#include <iostream>
#include <ctype.h>
#include <cstring>
#include "googleC++.h"

using namespace std;

const char SERVICE_1[] = "Spotify";
const char SERVICE_2[] = "Apple Music";
const char SERVICE_ALL[] = "Both";
#define YEAR_CURR 2016
#define MIN_YEAR 1500

class band;
class date{
    int day, month, year;
public:
    date();
    void SetDate();
    int GetDay(); int GetMonth(); int GetYear();
};
date::date()
{
    (day = 1, month = 1, year = 1);
}
class music: public date{
    char name[50], genre[20];

public:
    char service[2][20];
    friend void SelectService(band b); void GetService();

};

class band: public music{
    int noOfMembers;
public:
    band();
    void SetMembers(int num);
    int GetMembers();
};
band::band()
{
    noOfMembers = 0;
}

// Date declarations
void date::SetDate()
{
    cout << "Date: ";
    int d = GetInputInt(); int m = GetInputInt(); int y = GetInputInt();
    day = d; month = m; year = y;
    return;
}
int date::GetDay()
{
    return day;
}
int date::GetMonth()
{
    return month;
}
int date::GetYear()
{
    return year;
}

// Music class member declarations
// Display services.
void music::GetService()
{
    cout << "Service(s): " << endl;
    if (service[0] != NULL)
        cout << service[0] << endl;
    if (service[1] != NULL)
        cout << service[1] << endl;
    return;
}


// Friends.
void SelectService(band *b)
{
    char serv = '\0';
    cout << "(S)potify or (A)pple Music or (B)oth? ";
    cin >> serv;
    serv = toupper(serv);
    if (serv == 'S')
    {
        strcpy(b->service[0], SERVICE_1);
        strcpy(b->service[1], "\0");
    }
    else if (serv == 'A')
    {
        strcpy(b->service[1],SERVICE_2);
        strcpy(b->service[0], "\0");
    }
    else if (serv == 'B')
    {
        strcpy(b->service[0], SERVICE_1);
        strcpy(b->service[1],SERVICE_2);
    }
    else
        cout << "Invalid" << endl;
    return;
}

int main()
{
    band b;
    cout << "Details: " << endl;

    b.SetDate();
    cout << b.GetDay() << "." << b.GetMonth() << "." << b.GetYear() << endl;

    SelectService(&b);
    b.GetService();

    return 0;
}

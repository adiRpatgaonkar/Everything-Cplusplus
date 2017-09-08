// By: Aditya Patgaonkar
// Date: 23.10.2016
// Demonstrate usage of pointers in oop. (Pointers to objects, reference pointers, this pointer)
#include <iostream>
#include <cstring>
#include "googleC++.h"

using namespace std;

class car{
    char carName[80], companyName[20];
    int topSpeed;
public:
    car()
    {
        cout << "Please input the name of the car: ";
        GetInputString(this->carName, 80);
        cout << "Please input the name of the company of the car: ";
        GetInputString(this->companyName, 20);
        cout << "Please input the top speed of your car: ";
        this->topSpeed = GetInputInt();
    }
    car(char* carName, char* companyName, int topSpeed)
    {
        SetCarName(carName);
        SetCompanyName(companyName);
        SetTS(topSpeed);
        // strcpy(this->carName, carName); strcpy(this->companyName, companyName);
        //this->topSpeed = topSpeed;
    }
    void SetCarName(char* s)
    {
        strcpy(carName, s);
        return;
    }
    void SetCompanyName(char* s)
    {
        strcpy(companyName, s);
        return;
    }
    void SetTS(int ts)
    {
        topSpeed = ts;
        return;
    }

    char* GetCarName() { return carName; }
    char* GetCompanyName() { return companyName; }
    int GetTS() { return topSpeed; }
    friend void DisplayCar(car x);
};

void DisplayCar(car x)
{
    cout << "Car name: " << x.GetCarName();
    cout << "Car name: " << x.GetCompanyName();
    cout << "Top speed of the car: " << x.GetTS() << " kms/hr." << endl;
    return;
}

int main()
{
    cout << "Please input the name of your car: ";
    char name1_1[80]; GetInputString(name1_1, 80);
    cout << "Please input the name of the company of your car: ";
    char name1_2[80]; GetInputString(name1_2, 20);
    cout << "Please input the top speed of your car: ";
    int i = GetInputInt();
    car myCar(name1_1, name1_2, i);
    DisplayCar(myCar);

    cout << "Please input the name of your bro's car: ";
    char name2_1[80]; GetInputString(name2_1, 80);
    cout << "Please input the name of the company of your bro's car: ";
    char name2_2[80]; GetInputString(name2_2, 20);
    cout << "Please input the top speed of your bro's car: ";
    int j = GetInputInt();
    car myBrosCar(name2_1, name2_2, j);
    DisplayCar(myCar);

    return 0;
}

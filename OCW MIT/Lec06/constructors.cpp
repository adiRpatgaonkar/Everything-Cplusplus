/***********

    DEMO: Constructors.

            ***********/

#include <iostream>

using namespace std;

class Point
{
    public:
        double x, y;

    // Constructor
    Point()
    {
        x = 0.0; y = 0.0;
    }
    Point(double m, double n)
    {
        x = m; y = n;
    }
    void createP()
    {
        cin >> x >> y;
        return;
    }

    void offsetP()
    {
        cout << "X offset: ";
        double xOff; cin >> xOff;
        cout << "Y offset: ";
        double yOff; cin >> yOff;

        x += xOff; y += yOff;

        return;
    }

    void printP()
    {
        cout << "(" << x << " , " << y << ")";
        return;
    }

};

class Vector
{
    public:
        Point start, end;

    void createV()
    {
        cout << "Vector:" << endl;
        cout << "Start: Input x and y co-ordinates." << endl;
        start.createP();
        cout << "End: Input x and y co-ordinates." << endl;
        end.createP();
        cout << "Vector created." << endl;
        return;
    }

    void offsetV()
    {
        cout << "Start offset:" << endl;
        start.offsetP();
        cout << "End offset:" << endl;
        end.offsetP();
        return;
    }

    void printV()
    {
        cout << "Vector : "; start.printP(); cout << " --> "; end.printP(); cout << "\n";
        return;
    }

};


int main(void)
{
    Vector v1;

    v1.createV();
    v1.printV();

    v1.offsetV();
    v1.printV();

    return 0;
}

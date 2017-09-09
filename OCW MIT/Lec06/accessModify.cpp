/* * * * * *
            Access modifiers!
                             * * * * * */

#include <iostream>

using namespace std;

class Point
{
private:
    double x, y;

public:
    Point()
    {
        x = 0.0; y = 0.0;
    }
    Point (double m, double n)
    {
        x = m; y = n;
    }

    // READ-ONLY
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
};

int main(void)
{
    Point point1;
//  point1.x = 2.0; // ERROR
    cout << "x : " << point1.getX() << endl; // READ-ONLY allowed.
    return 0;
}

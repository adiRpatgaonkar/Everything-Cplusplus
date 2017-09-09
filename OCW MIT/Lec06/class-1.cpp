/*
 *
 * DEMO: Classes intro with vector basics.
 *
 */

#include <iostream>

using namespace std;

class vector
{
public:
    double startX, startY; // Start co-ordinates (X,Y)
    double endX, endY; // End co-ordinates (X,Y)
};

void printVector(vector);
void Offset(vector &n, double, double);

int main(void)
{
    vector a;
    cout << "Give the starting co-ordinates of the vector:" << endl;
    cout << "x : "; cin >> a.startX;
    cout << "y : "; cin >> a.startY;

    cout << "Give the end co-ordinates of the vector:" << endl;
    cout << "x : "; cin >> a.endX;
    cout << "y : "; cin >> a.endY;

    printVector(a);

    cout << "Offset:" << endl;
    double offX, offY;
    cout << "x : "; cin >> offX;
    cout << "y : "; cin >> offY;
    Offset(a, offX, offY);

    printVector(a);

    return 0;
}

void printVector(vector n)
{
    cout << "Vector : (" << n.startX << " , " << n.startY << ")-->" << "(" << n.endX << " , " << n.endY << ")" << endl;
}

void Offset(vector &n, double X, double Y)
{
    n.startX += X; n.endX += X;
    n.startY += Y; n.endY += Y;
}

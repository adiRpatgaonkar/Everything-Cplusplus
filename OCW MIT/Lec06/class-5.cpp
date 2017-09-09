/*
 *
 * DEMO: Classes. Methods in more depth.
 *
 * COMMENT the code more appropriately!
 */

#include <iostream>

using namespace std;

class point
{
 public:
    double x, y;

    void offsetPoint()
    {
        cout << "X offset : ";
        double m; cin >> m;
        cout << "Y offset : ";
        double n; cin >> n;
        x += m;
        y += n;
        return;

    }

    void printPoint()
    {
        cout << "(" << x << " , " << y << ")" << endl;
        return;
    }
};
class vector
{
    public:
    point start, end;

    void print()
    {
        cout << "Vector : (" << start.x << " , " << start.y << ")-->" << "(" << end.x << " , " << end.y << ")" << endl;
        return;
    }

    void vOffset()
    {
        cout << "Start offset:" << endl;
        start.offsetPoint();
        cout << "End offset:" << endl;
        end.offsetPoint();
        return;
    }
};


int main(void)
{
    vector v1;
    cout << "Vector:" << endl;
    cout << "Start: Input x and y co-ordinates." << endl;
    cin >> v1.start.x >> v1.start.y;
    cout << "End: Input x and y co-ordinates." << endl;
    cin >> v1.end.x >> v1.end.y;
    v1.print();

    v1.vOffset();
    v1.print();

    v1.start.offsetPoint();
    cout << "Start: ";
    v1.start.printPoint();
    
    v1.print();

    return 0;
}

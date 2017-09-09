/*
 *
 * DEMO: Classes. Methods!
 *
 */

#include <iostream>

using namespace std;

class point
{
    public:
    double x, y;

    void offset()
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
        cout << "X offset : ";
        double m; cin >> m;
        cout << "Y offset : ";
        double n; cin >> n;

        start.x += m; start.y += n;
        end.x += m; end.y += n;
    }
};

int main(void)
{
    vector vec1;

    cout << "Start: Input x and y co-ordinates." << endl;
    cin >> vec1.start.x >> vec1.start.y;
    cout << "End: Input x and y co-ordinates." << endl;
    cin >> vec1.end.x >> vec1.end.y;

    // Print the vector.
    vec1.print();

    // Print the point.
    vec1.start.printPoint();
    vec1.end.printPoint();

    // Offset a vector.
    vec1.vOffset();

    vec1.print();

    // Offset a single point.
    vec1.start.offset();

    vec1.print();

    return 0;
}

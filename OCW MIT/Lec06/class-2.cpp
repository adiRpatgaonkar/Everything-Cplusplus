/*
 *
 * DEMO: Classes intro with classes within classes
 *
 */

 #include <iostream>

using namespace std;

class point
{
    public:
    double x, y;
};
class vector
{
    public:
    point start, end;
};

void printVector(vector);
void offset(point &a, point &b);

int main(void)
{
    vector vec1;

    cout << "Start: Input x and y co-ordinates." << endl;
    cin >> vec1.start.x >> vec1.start.y;
    cout << "End: Input x and y co-ordinates." << endl;
    cin >> vec1.end.x >> vec1.end.y;

    printVector(vec1);

    vec1.end = vec1.start;

    printVector(vec1);

    offset(vec1.start, vec1.end);

    printVector(vec1);

    return 0;
}

void printVector(vector n)
{
    cout << "Vector : (" << n.start.x << " , " << n.start.y << ")-->" << "(" << n.end.x << " , " << n.end.y << ")" << endl;
}

void offset(point &a, point &b)
{
    cout << "X offset : ";
    double m; cin >> m;
    cout << "Y offset : ";
    double n; cin >> n;

    a.x += m; a.y += n;
    b.x += m; b.y += n;
}

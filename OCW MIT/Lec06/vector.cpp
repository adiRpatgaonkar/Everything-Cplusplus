/*
 *
 * Implementation of vector basics!
 *
 */
#include <iostream>

using namespace std;

#include "vector.h"

void point::offset()
{
    cout << "X offset : ";
    double m; cin >> m;
    cout << "Y offset : ";
    double n; cin >> n;
    x += m;
    y += n;
    return;
}
void point::printPoint()
{
    cout << "(" << x << " , " << y << ")" << endl;
    return;
}

void vector::print()
{
    cout << "Vector : (" << start.x << " , " << start.y << ")-->" << "(" << end.x << " , " << end.y << ")" << endl;
    return;
}
void vector::vOffset()
{
    cout << "X offset : ";
    double m; cin >> m;
    cout << "Y offset : ";
    double n; cin >> n;

    start.x += m; start.y += n;
    end.x += m; end.y += n;
}

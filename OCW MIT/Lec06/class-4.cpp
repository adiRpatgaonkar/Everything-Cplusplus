/*
 *
 * DEMO: Classes. Methods...in seperate files!
 *
 * COMMENT the code more appropriately!
 */

#include <iostream>

#include "vector.h"

using namespace std;

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

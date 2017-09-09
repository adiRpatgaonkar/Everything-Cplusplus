// AdityaRP: Sept 6/16
// Demonstrate the use of constants and auto data-type
// P.S: It is awesome!

#include <iostream>

// For square root.
#include <math.h>

using namespace std;

int main(void)
{
    const auto y = 12;
    auto var = 18;

    //y = 3; // Error: You lied

    constexpr auto ans = y + 1;
    //constexpr double answr = y + 1; // Error: You lied. Needs a constant expression
    cout << ans << endl;

    const auto x = y + 1;
    cout << x << endl;

    const auto z = ans + 1;
    cout << z << endl;

}

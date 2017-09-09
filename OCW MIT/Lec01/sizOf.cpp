//
//  sizOf.cpp
//  OCW MIT
//
//  Created by Arp on 26/07/16.
//  Copyright © 2016 Arp. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    // insert code here...
    cout << "Hello, C++!\n";
    
    // Testing variables, data types.
    bool a = true;
    cout << a << endl;
    
    // Size of data types (In bytes)
    int i; short s; long l; long long ll; char c; bool b; float f; double d; long double ld;
    cout << "short: " << sizeof(s) << "\nint: " << sizeof(i) << "\nlong: " << sizeof(l) << "\nlong long: " << sizeof(ll) << "\nchar: " << sizeof(c) << "\nbool: " << sizeof(b) << "\nfloat: " << sizeof(f) << "\ndouble: " << sizeof(d) << "\nlong double: " << sizeof(ld) << "\n" << endl;
    
    return 0;
}

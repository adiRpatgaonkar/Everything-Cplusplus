/*
 * Header file for lecture 3 codes.
 *
 */

// Function overloading!
void showMe(int);
void showMe(char*);

// Pass by reference
void referencePass(int &a);
// Pass by value
void valuePass(int a);

// Return multiple values by help of pass by reference
int divide(int, int, int &r);

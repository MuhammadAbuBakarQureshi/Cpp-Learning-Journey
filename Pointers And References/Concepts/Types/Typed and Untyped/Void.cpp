#include <iostream>

using namespace std;

int main()
{
    // Void pointer is a pointer which has no associated data type with it

    int num1 = 10;

    float num2 = 2.2;

    char ch = 'g';

    void *genericptr = &num1;

    // Two ways of typecasting

    // Typecasting to int

    // 1st
    // cout << (int*)genericptr << endl; // Address
    // cout << *(int*)genericptr << endl; // value

    // 2nd
    int *intptr = static_cast<int *>(genericptr);

    cout << *intptr << endl;

    // storing float address in "genericptr"
    // after printing int

    genericptr = &num2;

    // Typecasting to float
    // This is the first way to typecast

    cout << *(float *)(genericptr) << endl;

    // storing char address in "genericptr"
    // after printing float

    genericptr = &ch;

    // Typecasting to char
    // This is the second way to typecast

    char* charptr = static_cast<char*>(genericptr);

    cout << *charptr << endl;

    return 0;
}
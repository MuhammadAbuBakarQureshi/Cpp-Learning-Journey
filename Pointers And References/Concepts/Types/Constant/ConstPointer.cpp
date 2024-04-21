#include <iostream>

using namespace std;

int main()
{

    int value = 10;

    int *ptr = &value;

    const int *ptrToConst = &value; // pointer to const

    int *const constptr = &value; // constant pointer ✔️

    // *ptrToConst = 20;       ❌ : cannot modify const data
    *constptr = 20; 

    cout << *constptr << endl;

    int newValue = 20; //✔️

    // constptr = &newValue; ❌: cannot change the address of constant pointer

    return 0;
}
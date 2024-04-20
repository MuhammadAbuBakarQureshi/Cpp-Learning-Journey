#include <iostream>

using namespace std;

int main()
{

    // Pointer to int is  created, and pointing to some garbage address

    int *p; // This is bad practice  ❌

    // Pointer to int is created, and pointing to null, and 
    // it gives segmentation fault

    int *ptr = 0; // This is good practice ✔️

    return 0;
}
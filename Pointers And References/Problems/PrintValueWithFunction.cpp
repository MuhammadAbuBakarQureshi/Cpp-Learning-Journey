#include <iostream>

using namespace std;

void printPointer(int *ptr)
{

    cout << "Number you have entered : " << ptr << endl;
}

int main()
{

    // Q-NO-1// Write a function which will take pointer and display the number on screen. Take number from user and print it on screen
    // using that function.

    int num;

    cout << "Enter number : ";

    cin >> num;

    printPointer(&num);

    return 0;
}
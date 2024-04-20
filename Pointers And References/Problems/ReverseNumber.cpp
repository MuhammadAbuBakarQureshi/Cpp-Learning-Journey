#include <iostream>

using namespace std;

void reverseNo(int *num, int *reverse);

int main()
{

    // Write a program to reverse the digits a number using pointers.

    int num, reverse = 0;

    cout << "Enter number : ";

    cin >> num;

    reverseNo(&num, &reverse);

    cout << "Reverse number is : " << reverse << endl;

    return 0;
}

void reverseNo(int *num, int *reverse)
{

    while (*num != 0)
    {

        int lastDigit = *num % 10;

        *reverse = *reverse * 10 + lastDigit;

        *num = *num / 10;
    }
}
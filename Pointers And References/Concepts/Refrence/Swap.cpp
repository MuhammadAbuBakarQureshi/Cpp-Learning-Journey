#include <iostream>

using namespace std;

void swap(int &a, int &b)
{

    int temp = a;
    a = b;
    b = temp;
}

int main()
{

    int num1 = 1, num2 = 3;

    cout << "Before : " << num1 << " " << num2 << endl;

    swap(num1, num2);

    cout << "After  : " << num1 << " " << num2 << endl;

    return 0;
}
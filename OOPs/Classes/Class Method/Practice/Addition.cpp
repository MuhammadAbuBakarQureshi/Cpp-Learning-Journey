#include <iostream>

using namespace std;

class math
{

public:
    int sum(int, int);
};

int math::sum(int a, int b)
{

    int result = a + b;
    return result;
}

int main()
{

    int a, b;

    cout << "Enter First Number : ";

    cin >> a;

    cout << "Enter Second Number : ";

    cin >> b;

    math calculator;
    cout << "Sum of " << a << " & " << b << " is : " << calculator.sum(a, b);

    return 0;
}
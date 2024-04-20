#include <iostream>

using namespace std;

int main()
{

    float num1, num2, result;

    cout << "Enter first number : ";

    cin >> num1;

    start:

    cout << "Enter second number : ";

    cin >> num2;

    try
    {
        if (num2 == 0)
        {
            throw(num2);
        }
    }

    catch (float num2)
    {

        cout << "You cannot divide by zero" << endl;

        goto start;
    }

    result = num1 / num2;

    cout << "Result is = " << result << endl;

    return 0;
}
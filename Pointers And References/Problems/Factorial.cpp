#include <iostream>

using namespace std;

int factorial(int *num);

int main()
{

    int num;

    cout << "Enter number : ";

    cin >> num;

    cout << "Factorial of " << num << " is : " << factorial(&num) << endl;

    return 0;
}

int factorial(int *num)
{

    int result = 1;

    for (int i = *num; i > 0; i--)
    {

        result = result * i;
    }

    return result;
}
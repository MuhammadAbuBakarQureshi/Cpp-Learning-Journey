#include <iostream>

using namespace std;

void fibonacci_Sequence()
{

    // Let's say you want 5 numbers of fibonacci sequence

    int digits;

    cout << "Enter how many digits of Fibonacci sequence you want : ";

    cin >> digits;

    int prev1 = 0;
    int prev2 = 1;

    int fibonacci[digits] = {0, 1};

    int result;

    for (int i = 2; i < digits; i++)
    {

        fibonacci[i] = fibonacci[prev1] + fibonacci[prev2];

        prev1++;
        prev2++;
    }

    for (int i = 0; i < digits; i++)
    {

        cout << fibonacci[i] << " ";
    }
}

int main()
{

    fibonacci_Sequence();

    return 0;
}
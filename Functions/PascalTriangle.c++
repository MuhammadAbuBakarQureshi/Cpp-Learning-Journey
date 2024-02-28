#include <iostream>

using namespace std;

int factorial(int n)
{

    int factorial = 1;

    for (int i = n; i > 0; i--)
    {

        factorial *= i;
    }

    return factorial;
}

int main()
{

    int row = 4;

    for (int i = 0; i <= row; i++)
    {

        for (int j = 0; j <= i; j++)
        {

            int answer = factorial(i) / (factorial(j) * factorial(i - j));

            cout << answer << " ";
        }

        cout << endl;
    }

    return 0;
}
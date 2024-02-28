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

    int n, r;

    cout << "Input the value of n : ";

    cin >> n;

    cout << "Input the value of r : ";

    cin >> r;

    cout << endl;

    int answer = factorial(n) / (factorial(r) * factorial(n - r));

    cout << "Answer is : " << answer;

    return 0;
}
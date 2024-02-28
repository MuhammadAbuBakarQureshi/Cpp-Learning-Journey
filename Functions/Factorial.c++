#include <iostream>

using namespace std;

int factorial(int n){

    int factorial = 1;

    for (int i = n; i > 0; i--)
    {

        factorial *= i;
    }

    return factorial;
}

int main()
{

    int n = 10;

    cout << factorial(n) << endl;

    return 0;
}
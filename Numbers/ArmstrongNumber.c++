#include <iostream>

#include <math.h>

using namespace std;

int main()
{

    int n;

    cout << "Input a number : ";

    cin >> n;

    int num = n;

    int res = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;

        res =  res + pow(lastDigit, 3);

        n = n / 10;
    }

    if ( num == res )
    {

        cout << "Armstrong Number";
    }
    else
    {

        cout << "Non-Armstrong";
    }

    return 0;
}

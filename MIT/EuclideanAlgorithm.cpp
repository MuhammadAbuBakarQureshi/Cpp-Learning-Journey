#include <iostream>

using namespace std;

int gcd(int n1, int n2)
{

    if (n1 == 0)
        return n2;

    if (n2 == 0)
        return n1;

    while (n1 != n2)
    {
        if (n1 > n2)
        {

            n1 = n1 - n2;
        }
        else
        {

            n2 = n2 - n1;
        }
    }

    return n1;
}

int main()
{

    int n1, n2;

    cout << "Enter First Number : ";

    cin >> n1;

    cout << "Enter Second Number : ";

    cin >> n2;

    cout << "GCD Of Given Input : " << gcd(n1, n2) << endl;

    return 0;
}
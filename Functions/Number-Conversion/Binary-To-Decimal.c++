#include <iostream>
#include <math.h>

using namespace std;

int binaryToDecimal(int n)
{

    int sum = 0;

    int i = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;

        int calculation = lastDigit * pow(2, i);

        sum += calculation;

        n /= 10;

        i++;
    }

    return sum;
}

int main()
{

    int n;

    cout << "Input Any Binary Number : ";

    cin >> n;

    cout << binaryToDecimal(n) <<endl;

    return 0;
}
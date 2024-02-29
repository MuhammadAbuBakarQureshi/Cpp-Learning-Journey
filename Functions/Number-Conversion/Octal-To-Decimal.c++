#include <iostream>

#include <math.h>

using namespace std;

int octalToDecimal(int n){

    int i = 0;

    int sum = 0;

    while (n > 0)
    {

        int lastDigit = n % 10;

        int calculation = lastDigit * pow(8, i);

        sum += calculation;

        n /= 10;

        i++;
    }

    return sum;
}



int main()
{

    int n;

    cout << "Enter Octal Number : ";

    cin >> n;

    cout << octalToDecimal(n);

    return 0;
}
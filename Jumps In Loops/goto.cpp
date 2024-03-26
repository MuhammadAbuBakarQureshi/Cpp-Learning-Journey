#include <iostream>

using namespace std;

int main()
{

    int n;

    start:

    cout << "Guess Number : ";

    cin >> n;

    if (n == 10)
    {

        cout << "WOW, Correct" << endl;
    }
    else
    {

        cout << "Incorrect, Try again" << endl;
        goto start;
    }

    return 0;
}
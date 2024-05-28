#include <iostream>

using namespace std;

int main()
{

    string first = "Hello";

    string second = " World";

    string third = first + second; // concatenation of first and second string

    cout << third << endl;

    if (first == second)
    {

        cout << "\nFirst and Second are equal" << endl;
    }
    else
    {

        cout << "\nFirst and second are not equal" << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()
{

    string fullName;

    cout << "Enter your full name : ";

    getline(cin, fullName);

    cout << "Your full name is : " << fullName << endl;

    return 0;
}
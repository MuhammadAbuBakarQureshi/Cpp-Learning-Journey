#include <iostream>
#include <cctype>

using namespace std;

int main()
{

    char character, result;

    int choice;

    cout << "\nEnter charcter : ";

    cin >> character;

    cout << "\n1. To upper case. " << endl
         << "2. To lower case. \n" << endl;

    cin >> choice;

    if (choice == 1)
    {

        result = toupper(character);
    }

    else if (choice == 2)
    {

        result = tolower(character);
    }

    else{

        cout << "\nYou have enter wrong choice" << endl;
    }

    cout << result << endl;

    return 0;
}
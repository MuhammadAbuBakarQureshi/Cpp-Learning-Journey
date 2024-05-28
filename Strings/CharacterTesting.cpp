#include <iostream>
#include <cctype>

using namespace std;

int main()
{

    char input; // declared

    cout << "\nEnter character : ";

    cin >> input; // Takes input

    cout << "\nThe character you have entered : " << input << endl;

    if (isprint(input)) // check if it is printable on screen
    {

        if (isalnum(input)) // check if it is letter or digit
        {

            if (isalpha(input)) // check if it is letter
            {

                cout << "\nThat's an alphabetic Character" << endl;

                if (islower(input)) // Check if it is lower case letter
                {

                    cout << "\nThat's a Lower case Character" << endl;
                }
                else if (isupper(input)) // check if it is upper case letter
                {

                    cout << "\nThat's a Upper case Character" << endl;
                }
            }

            else if (isdigit(input)) // check if it is digit
            {

                cout << "\nThat's a numeric digit" << endl;
            }
        }

        else if (ispunct(input)) // check if it is Punctuation character
        {

            cout << "\nThat's an punctuation character" << endl;
        }

        else if (isspace(input)) // check if it is whitespace character
        {

            cout << "\nThat's a white space character" << endl;
        }
    }

    return 0;
}

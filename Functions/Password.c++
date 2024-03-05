#include <iostream>

using namespace std;

void password(int n, int key){
    
    int counter = 2;

    while (counter >= 0)
    {

        cout << "Input The Password : ";

        cin >> n;

        if (n == key)
        {

            cout << "Correct Password";
            break;
        }
        else
        {

            if (counter > 0)
            {

                cout << "You Have Just " << counter << " Tries " << endl;
            }
            else
            {

                cout << "You Have No More Try" << endl;
            }
        }

        counter--;
    }
}


int main()
{

    int n ;

    int key = 12; // Set Password Here

    password(n, key);

    return 0;
}

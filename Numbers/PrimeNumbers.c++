#include <iostream>

using namespace std;

int main()
{

    int n;

    cout << "Input a number to check is it Prime Number or Not : ";

    cin >> n ;
 

    for (int i = 2; i < n; i++)
    {

        if ( n % i  == 0 ){

            cout << "Not Prime Number";
            break;
        }else{

            cout << "Prime Number";
            break;
        }

    }

    return 0;
}  
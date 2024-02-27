#include <iostream>

using namespace std;

int main()
{

    int n;

    cout << "Input a Number : ";

    cin >> n;

    int reverse = 0;

    // while (n > 0)
    // {
    //     int lastDigit = n % 10;10
        
    //     reverse += lastDigit;

    //     cout << reverse; 
        
    //     reverse = reverse - reverse;

    //     n = n / 10;

    // }



// Another way of Performing same task



    while( n > 0 ){

        int lastDigit = n % 10;

        reverse = reverse * 10 + lastDigit;

        n = n / 10;
    }
    
    cout << reverse ;

    return 0;
}
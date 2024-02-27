#include <iostream>

using namespace std; 

int main(){

    int n = 3;

    cout << "Input a number : ";

    cin >> n;

    for ( int i = n ; i > 0 ; i-- ){

        for ( int j = 1 ; j <= 2*n - 1 ; j++ ){

            if( j >= n - ( i - 1 ) && j <= n + ( i - 1 ) ){

                cout << "*";
            }else{

                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Input a number : ";

    cin>> n ;

    for ( int i = 1 ; i <= n ; i++ ){
       
        for ( int j = 1 ; j <= n*2 ; j++ ){
       
            if ( j <= i || j >= n*2 - ( i - 1 ) && j <= n*2 ){

                cout << "*";
            }else{

                cout << " ";
            }
            
        }
        cout << endl;
    }



    for ( int i = 1 ; i <= n ; i++ ){
       
        for ( int j = 1 ; j <= n*2 ; j++ ){
       
            if ( j <= n - ( i - 1 ) || j >= n*2 - ( n - i ) && j <= n*2 ){

                cout << "*";
            }else{

                cout << " ";
            }
            
        }
        cout << endl;
    }

    return 0;
}
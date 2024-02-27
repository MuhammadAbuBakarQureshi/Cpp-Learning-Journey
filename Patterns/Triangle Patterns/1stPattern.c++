#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Input a number :";

    cin>>n;

    // int count = 1;
 
    for ( int i = 1 ; i <= n ; i++){
        for ( int j = 1 ; j <= i ; j++ ){
 
            cout << "*";
            
// For printing Numbers instead of stars uncomment the count variable ,initializing , printing and increment

            // cout << count;
            // count++;   
        }
        cout << endl;
    }

    return 0;
}
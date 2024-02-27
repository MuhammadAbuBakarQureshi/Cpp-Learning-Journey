#include <iostream>

using namespace std;

int main(){

    int a, b, i;

    cin>>a>>b;

    for (a ; a <= b ; a++ ){
        for( i = 2 ; i < a ; i++ ){

            if( a % i == 0){

                cout<< "Not Prime " << a <<endl;
                break;
            }
        }
        
        if( a == i){
            cout<< "Prime Number " << a <<endl;
        }
    }

    return 0;
}
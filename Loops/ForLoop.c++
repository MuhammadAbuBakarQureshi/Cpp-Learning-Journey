#include <iostream>

using namespace std;

int main(){

int sum = 0;
    
int num;    

cin>>num;

    for ( int counter = 1 ; counter <= num ; counter++ ){

        sum += counter;
    }

    cout << sum << endl;
    return 0;
}
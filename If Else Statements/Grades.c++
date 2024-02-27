#include <iostream>

using namespace std;

int main(){

    int percentage;

    cin>> percentage;

    if(percentage > 79){

        cout<< "A1";
    }else if (percentage > 69 && percentage < 80){

        cout<< "A";
    }else if (percentage > 59 && percentage < 70){

        cout<< "B";
    }else if(percentage > 49 && percentage < 60){

        cout<< "C";
    }else if(percentage > 39 && percentage < 50){

        cout<< "D";
    }else{

        cout<< "F";
    }
    
    return 0;
}
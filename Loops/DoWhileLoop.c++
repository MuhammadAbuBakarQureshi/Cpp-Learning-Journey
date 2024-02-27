#include <iostream>

using namespace std;

int main(){

    

    int num;    

    cin>>num;

    do{

        cout << "Enter the Positive Number" <<endl;
        cin>>num; 
    }while(num <= 0);

    cout<< "Positive Number " << num << endl;

    return 0;


}
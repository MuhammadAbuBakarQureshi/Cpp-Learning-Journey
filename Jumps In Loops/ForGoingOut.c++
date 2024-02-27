#include <iostream>

using namespace std;

// You can just go out on odd days

int main(){

    int pocketMoney = 3000;

    for ( int date = 1 ; date <= 30 ; date++){
        if( date % 2 == 0){      
        //  "CONITNUE"  Skip to the next iteration of the loop

            continue;  
        }else{

        // 300 used per day when you go out 

            pocketMoney = pocketMoney - 300;

            if(pocketMoney == 0){

                cout << "You have an insufficient amount for going out. " << date <<endl;

            // Terminate the loop 

                break;
            }else{

                cout << "You have a sufficient amount for going out. " << date <<endl; 
            }
        }
    }

    return 0;
}
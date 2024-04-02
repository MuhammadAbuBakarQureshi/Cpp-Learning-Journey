#include <iostream>

using namespace std;

int main(){

    char button;
    cout<< "Please Input a Character" <<endl;
    cin>> button;

    switch  (button)
    {
    case 'a':
        cout<< "As-salamu alaykum" <<endl;
        break;
    
    case 'b':
        cout<< "Hello" <<endl;
        break;

    case 'c':
        cout<< "Salut" <<endl;
        break;    

    case 'd':
        cout<< "Hola" <<endl;
        break;        


    case 'e':
        cout<< "Ciao" <<endl;
        break;                
    
    default:
        cout<< "I am still learning more!" <<endl;
        break;
    }
}

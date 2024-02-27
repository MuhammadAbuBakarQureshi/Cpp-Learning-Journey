#include <iostream>

using namespace std;

int main(){

    float a, b;

    cout<< "Input first Number" <<endl;

    cin>>a;

    cout<< "Input second Number" <<endl;

    cin>>b;
    
    char op;

    cout<< "Input any of these operators to perform calculation  /, *, +, - \n" <<endl;

    cin>>op;

    switch (op)
    {
    case '/':
        cout<< a / b <<endl; 
        break;
    
    case '*':
        cout<< a * b <<endl;
        break;

    case '+':
        cout<< a + b <<endl;
        break;

    case '-':
        cout<< a - b <<endl;
        break;

    default:
        cout<< "Please give the right op to perform task." <<endl;
        break;
    }

}
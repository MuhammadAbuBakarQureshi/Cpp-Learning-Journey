#include <iostream>
#include <string>

using namespace std;

int main()
{

    string message = "Hello, How are you";

    string firstSubString = message.substr(0, 5);

    string secondSubString = message.substr(7, 18);

    cout << "\n First Sub String is : " << firstSubString << endl;
    
    cout << "\n Second Sub String is : " << secondSubString << endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main()
{

    string message = "Hello, How are you";

    string name = "Muhammad";

    string insert = message.insert(6, name);

    string deleteSubString = message.erase(6, 8);

    // If you want to delete whole string then use clear()

    cout << deleteSubString << endl;

    message.clear();

    cout << message << endl; // doesn't print anything except line  

    return 0;
}
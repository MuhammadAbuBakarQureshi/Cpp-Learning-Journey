#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{

    string message = "Hello, How are you";

    string name = "Muhammad";

    string insert = message.insert(6, name);

    string replace = message.replace(6,8,"Ali");

    cout << replace << endl;

    return 0;
}
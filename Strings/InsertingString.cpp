#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{

    string message = "Hello, How are you";

    string name = "Muhammad";

    string result = message.insert(6,name);

    cout << result << endl;

    return 0;
}
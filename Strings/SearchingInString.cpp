#include <iostream>
#include <string>

using namespace std;

int main()
{

    string message = "Hello, How are you";

    string search = "are";

    int stringSearch = message.find(search);

    int string_Search_From_Position = message.find(search, 5); // Searching starts from 5th index

    cout << stringSearch << endl;

    cout << string_Search_From_Position << endl;

    return 0;
}
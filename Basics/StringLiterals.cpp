#include <iostream>

using namespace std;

int main()
{

    string folder = "C:\\Users\\";

    cout << folder << endl;

    // Prefixed with R before the opening quote.

    string file = R"(C:\Users\Subjects)";

    cout << file << endl;

    // Concatenation

    const string grettings = "Hello, ";

    string aboutHealth = "How are you";

    string message = grettings + aboutHealth;

    cout << message << endl;

    return 0;
}
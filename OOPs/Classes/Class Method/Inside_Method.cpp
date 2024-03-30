#include <iostream>

using namespace std;

class myClass // The class
{

public: // Access Specifier
        //////////// This is Inside Method \\\\\\\\\\\\\\\\\\\\/
    void meassage() // Method/ Function
    {

        cout << "Hello World!" << endl;
    }
};

int main()
{
    myClass myObj; // The object

    myObj.meassage(); // Call the Method / Function

    return 0;
}
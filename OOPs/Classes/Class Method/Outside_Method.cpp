#include <iostream>

using namespace std;

class myClass // The class
{

public:             // Access specifier
    void message(); // Method / Function declaration
};

// Method / Function declaration outside the class
void myClass::message()
{

    cout << "This is Outside Function" << endl;
}

int main()
{

    myClass myObj; // create an object of myClass

    myObj.message(); // Call Method / Function

    return 0;
}
#include <iostream>

using namespace std;

int main()
{

    // Base Class
    class Parent
    {

    public:
        string parentName = "Nazar";
    };

    // Derived Class
    class child : public Parent
    {

    public:
        string childName = "Farooq";
    };

    child myCar;

    cout << "Parent Name : " << myCar.parentName << endl; //parentName property is inherit from "Parent" class

    cout << "Child Name : " << myCar.childName << endl;

    return 0;
}
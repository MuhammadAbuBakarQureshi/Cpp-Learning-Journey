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
    class Child : public Parent
    {

    public:
        string childName = "Farooq";
    };

    // Further Derived Class
    class GrandChild : public Child
    {

    public:
        string grandChildName = "Hafsa";
    };

    GrandChild Names;

    cout << "Parent Name : " << Names.parentName << endl; // parentName property is inherit from "Parent" class

    cout << "Child Name : " << Names.childName << endl; // childName property is inherit from "Child" class

    cout << "Grand Child Name : " << Names.grandChildName << endl;


    return 0;
}
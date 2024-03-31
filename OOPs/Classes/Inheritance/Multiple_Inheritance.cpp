#include <iostream>

using namespace std;

int main()
{

    // Base Class
    class MyClass
    {
    public:
        void myFunction()
        {

            cout << "Some content in Parent Class" << endl;
        }
    };

    // Another Base Class
    class MyOtherClass
    {

    public:
        void myOtherFunction()
        {

            cout << "Some content in another class" << endl;
        }
    };

    // Derived Class

    class MyChildClass : public MyClass, public MyOtherClass
    {
    };

    MyChildClass myObj;

    myObj.myFunction();
    myObj.myOtherFunction();

    return 0;
}
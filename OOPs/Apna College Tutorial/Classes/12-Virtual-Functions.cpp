#include <iostream>
#include <string>

using namespace std;

class Parent{

public:

    virtual void hello(){

        cout << "Hello from parent class" << endl;
    }

};

class Child
{

public:

    void hello()
    {

        cout << "Hello from child class" << endl;
    }
};

int main()
{

    Child c1;

    c1.hello();

    Parent p1;

    p1.hello();

    return 0;
}
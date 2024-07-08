#include <iostream>
#include <string>

using namespace std;

class Parent{

public:

    void get_info(){

        cout << "Parent class" << endl;
    }
};

class Child: public Parent{

public:

    // Parent class function will be overriden

    void get_info(){

        cout << "Child class" << endl;
    }
};

int main()
{

    Child c1;

    c1.get_info();

    return 0;
}
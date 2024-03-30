#include <iostream>

using namespace std;

class myClass
{

    public:

    void message();
};

void myClass::message()
{

    cout << "This is Outside Function" << endl;
}

int main()
{


    myClass myObj;

    myObj.message();

    return 0;
}
#include <iostream>

using namespace std;

int main()
{

    int value = 10;

    int &ref = value;

    ref = 20; // now value of "value" is changed to 20

    cout << "value = " << value << endl;

    value = 30; // now value of ref is changed to 30

    cout << "ref = " << ref << endl; 

    return 0;
}
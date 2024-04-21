#include <iostream>

using namespace std;

int main()
{

    const int value = 10;

    const int &ref = value; // ok: both refrence and underlying objects are constant.

    // ref = 20; // Error: ref is refrence to constant.

    // int &ref = value; // Error: Non-constant refrence to constant object.

    cout << ref << endl;

    return 0;
}
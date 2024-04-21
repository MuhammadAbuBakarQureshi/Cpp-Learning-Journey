#include <iostream>

using namespace std;

int main()
{

    const int value = 10;

    const int &ref = value; // ✔️: both refrence and underlying objects are constant.

    // ref = 20; // ❌: ref is refrence to constant.
    // int &ref = value; // ❌: Non-constant refrence to constant object.

    cout << ref << endl;

    int num = 1;

    const int &r1 = num; // we can bind a const int& to non-const int objects

    // int &r2 = 2; // ❌
    const int &r2 = 2; // ✔️

    const int &r3 = r2 * 2; // ✔️

    cout << r3;

    return 0;
}
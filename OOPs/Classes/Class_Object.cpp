#include <iostream>

using namespace std;

class cars
{

    // Properties
    int year;
};

class truck
{

    // Empty
};

int main()
{

    cout << "Size : " << sizeof(cars) << endl;  // 4 Bytes b/c int is of 4 Bytes
    cout << "Size : " << sizeof(truck) << endl; // 1 Bytes

    return 0;
}
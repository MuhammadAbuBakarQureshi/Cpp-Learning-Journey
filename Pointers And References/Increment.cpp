#include <iostream>

using namespace std;

int main()
{

    int num = 10;

    cout << "Before increment: " << num << endl;

    int *ptr = &num; // address

    for (int i = 0; i < 5; i++){

        (*ptr)++; // increment after drefrence
    }

    cout << "After increment: " << num << endl;

    return 0;
}
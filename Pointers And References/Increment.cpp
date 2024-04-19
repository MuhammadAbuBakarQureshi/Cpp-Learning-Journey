#include <iostream>

using namespace std;

int main()
{

    int num = 10;

    int *ptr = &num; // address

    for (int i = 0; i < 5; i++){

        (*ptr)++; // increment after drefrence
    }

    cout << num;

    return 0;
}
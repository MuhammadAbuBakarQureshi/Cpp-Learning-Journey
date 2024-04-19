#include <iostream>

using namespace std;

int main()
{

    int num = 10;

    cout << "Num = " << num << endl;

    //   Address of the operator --&

    cout << "Adress of the num is : " << &num << endl;

    //   Storing address of the operator

    int *ptr = &num;

    cout << "The value of num in pointer : " << *ptr << endl;

    return 0;
}
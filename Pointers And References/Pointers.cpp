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
    
    // Other way of pointing pointer to int

    int *p = 0;

    p = &num; // Pointing to int with null pointer

    cout << "Address of the num is : " << p << endl;

    cout << "The value of num : " << *p << endl;

    return 0;
}
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

    *ptr = 5; // This will change the value of num

    cout << "Value of num : " << num << endl;

{

    *ptr = 3; // This value is changed in the block but it will change the value of num all over the code
}
    
    cout << "Value of num is : " << num << endl;



    return 0;
}


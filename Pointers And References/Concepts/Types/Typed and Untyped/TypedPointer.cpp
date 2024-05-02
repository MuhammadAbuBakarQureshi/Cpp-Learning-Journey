#include <iostream>

using namespace std;

int main()
{

    int num1 = 10;

    int* ptr = &num1;

    // Typed pointers always include a memory type specification in the pointer declaration and
    // always refer to a specific memory area.
    
    // Syntax ::
    // datatype* pointername = refrence;

    cout << "Address : " << ptr << endl;

    cout << "Value : " << *ptr << endl;

    return 0;
}
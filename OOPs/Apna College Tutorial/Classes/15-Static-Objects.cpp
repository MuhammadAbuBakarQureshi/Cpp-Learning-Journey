#include <iostream>
#include <string>

using namespace std;

class A{

public:

    // Constructor

    A(){

        cout << "I'm from Constructor" << endl;
    }

    // Destructor

    ~A(){

        cout << "I'm from Destructor" << endl;
    }
     
};

int main()
{


    if (true) {

        static A a1;
    }

    /* Expected output

    I'm from Constructor
    I'm from Destructor
    main function ends here
     */


    /*
    Obtain Output

    I'm from Constructor
    main function ends here
    I'm from Destructor
    */

    cout << "main function ends here" << endl;

    return 0;
}  
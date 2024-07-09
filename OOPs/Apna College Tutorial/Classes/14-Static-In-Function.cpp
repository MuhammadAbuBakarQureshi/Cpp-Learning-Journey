#include <iostream>
#include <string>

using namespace std;

void function()
{

    //    int x = 0;

    // Every time this function it is going to print x = 0, because x is intialized every time with 0
    // But if we use "static" keyword with variable then it is going to store in memory and it incerments every time

    static int x = 0;

    cout << "x = " << x << endl;

    x++;
}

int main()
{

    function();
    function();
    function();

    return 0;
}
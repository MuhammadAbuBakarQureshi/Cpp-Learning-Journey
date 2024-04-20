#include <iostream>

using namespace std;

int main()
{

    try
    {
        int age = 18;
        if (age >= 18)
        {

            cout << "Access granted : you are old enough" << endl;
        }
        else
        {

            throw(age);
        }
    }

    catch (int age)
    {

        cout << "Access denied : you must be atleast 18 year old" << endl;
        cout << "Your age is : " << age << endl;
    }

    return 0;
}

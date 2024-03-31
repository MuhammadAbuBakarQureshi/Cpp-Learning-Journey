#include <iostream>

using namespace std;

int main()
{

    // Base class

    class Employee
    {

    protected: // protected access specifier
        int salary;
    };

    // Dervied class

    class Programmer : protected Employee
    {

    public:
        void setSalary(int s)
        {

            salary = s;
        };

        int getSalary()
        {

            return salary;
        }
    };

    Programmer pay;

    pay.setSalary(20000);

    cout << "Salary is : " << pay.getSalary() << endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

class teacher{

private:

    int salary; // You can not access it outside the class because of private access modifier

    // To access it outside the class we use getter and setter methods

public:

    string name;    
    string department;
    string subject;

    //setter
    void set_salary(int new_Salary){

        salary = new_Salary;
    }

    //Getter
    double get_salary(){

        return salary;
    }

};

int main()
{

    teacher t1;

    t1.name = "Usman";

    t1.department = "Computer Sciences";

    t1.subject = "Programming Fundamentals";

    // To set salary we use "set_salary" method

    t1.set_salary(25000);

    // Printing values on console

    cout << t1.name << endl;

    cout << t1.department << endl;
    
    cout << t1.subject << endl;

    // To get salary we use "get_salary" method

    cout << t1.get_salary() << endl;

    return 0;
}
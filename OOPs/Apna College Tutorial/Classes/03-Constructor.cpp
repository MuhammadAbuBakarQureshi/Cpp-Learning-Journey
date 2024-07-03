#include <iostream>

using namespace std;

class teacher
{

public:
    // // This is Non-parameterized constructor

    // teacher(){ // it is only called once, at the time of object creation

    //     // InitialiZation in constructor

    //     department = "Computer Science";
    // }

    // This is Parameterized Constructor

    teacher(string n, string dept, string sub, double sal)
    {

        name = n;
        department = dept;
        subject = sub;
        salary = sal;
    }

    void get_info(){

        cout << "Name : " << name << endl;

        cout << "Department : " << department << endl;
    }

    string name;

    string department;

    string subject;

    double salary;
};

int main()
{

    // Using Non-parameterized constructor

    // teacher t1;

    // // This will print "Computer Science" beacuse, I have initialized the deaprtment already in constructor function

    // cout << t1.department << endl;

    //

    // Using Parameterized constructor

    teacher t1("Bakar", "Computer Science", "Subject", 25000);

    t1.get_info();    

    return 0;
}

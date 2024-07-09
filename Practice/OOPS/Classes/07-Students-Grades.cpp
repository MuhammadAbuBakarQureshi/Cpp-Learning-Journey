#include <iostream>
#include <string>

using namespace std;

// Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks_percentage.
// Include member functions to calculate the grade based on the marks_percentage and display the student's information.

class Student
{

private:
    string name;
    string class_name;
    double roll_number;
    double marks_percentage;

public:
    Student(string n, string cl, double rn, double m) : name(n), class_name(cl), roll_number(rn), marks_percentage(m){};

    string get_grades()
    {

        if (marks_percentage > 89)
        {

            return "A";
        }
        else if (marks_percentage > 79)
        {

            return "B";
        }
        else if (marks_percentage > 69)
        {

            return "C";
        }
        else if (marks_percentage > 59)
        {

            return "D";
        }
        else if (marks_percentage > 49)
        {

            return "E";
        }
        else if (marks_percentage > 39)
        {

            return "F";
        }else{

            string remarks = "Low grades";

            return remarks;
        }

        
    }

    void get_info(){

        cout << "Name of the student " << name << endl;

        cout << name << " is the student of class " << class_name << endl;

        cout << name << " roll number is " << roll_number << endl;

        cout << name << " percenatge is " << marks_percentage << "%" << endl;
    }
};

int main()
{

    Student s1("Muhammad Abu Bakar", "12", 96175, 70);

    cout << "Grades = " << s1.get_grades() << endl;

    s1.get_info();

    return 0;
}
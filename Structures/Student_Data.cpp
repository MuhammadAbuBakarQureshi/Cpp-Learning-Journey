#include <iostream>

using namespace std;

int main()
{

    struct student
    {
        string name;
        int roll_no;
        string age;
    };

    student stud[5];

    for (int i = 0; i < 5; i++)
    {

        cout << "Student Roll.no : " << i + 1 << endl;

        stud[i].roll_no = i + 1;

        cout << "Enter The name of Student : ";

        getline(cin, stud[i].name);

        cout << "Enter your age : ";

        getline(cin, stud[i].age);

        cout << endl;
    }

    int n;

    cout << "Enter Student Roll no whose data is required : ";

    cin >> n;

    for (int i = 0; i < 5; i++)
    {

        if (i + 1 == n)
        {

            cout << "Roll.No : " << stud[i].roll_no << endl;
            cout << "Student Name : " << stud[i].name << endl;
            cout << "Student Age : " << stud[i].age << endl;
        }
    }

    return 0;
}
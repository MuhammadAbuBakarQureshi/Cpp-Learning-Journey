#include <iostream>

using namespace std;

class cars // By default It is private which means you cannot access these Properties outside or niether inside the function
{

    // private:
    // public:  ------- Now you can access these Properties inside and outside the class
    // protected: ----- Now you can access these Properties just inside the class

    // Properties

    int sr_no; // This propertie is written above public so that's why it is Private

public:
    int year;

    // Properties
};

int main()
{

    cars car1;

    car1.year = 2020;

    cout << "Year : " << car1.year << endl;

    return 0;
}
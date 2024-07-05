#include <iostream>
#include <string>

using namespace std;

/*Write a C++ program to create a class called Person that has private member 
variables for name, age and country. Implement member functions to set and get the 
values of these variables.*/

class Person{

private:

    string name;
    string country;
    int age;

public:

    // setter for name

    void set_name(string name){

        this->name = name;
    }

    // getter for name

    string get_name(){

        return name;
    }

    // setter for country

    void set_country(string country){

        this->country = country;
    }

    // getter for country

    string get_country(){

        return country;
    }

    // setter for age

    void set_age(int age){

        this->age = age;
    }

    // getter for age

    int get_age(){

        return age;
    }

};

int main()
{
    string name, country;
    
    int age;

    Person p1;

    cout << "Enter your name : ";

    getline(cin >> ws, name);

    cout << "Enter your country name : ";

    getline(cin >> ws, country);
    
    cout << "Enter your age : ";

    cin >> age;

    p1.set_name(name);

    p1.set_country(country);

    p1.set_age(age);

    cout << p1.get_name() << endl;

    cout << p1.get_name() << " live in " << p1.get_country() << endl;

    cout << p1.get_name() << " is " << p1.get_age() << " year old " << endl;

    return 0;
}
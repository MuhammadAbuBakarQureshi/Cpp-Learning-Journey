#include <iostream>
#include <string>

using namespace std;

class car{

    // We have parameterized constructor
public:

    string name;

    car(string name){ // we want to store this parameter "name" into class member "name"

        //name = name; Error: // this will give error beacuse it cannot fiqure out which one is passed and which one is member

        // we use this pointer here

        cout << "Member name : " << this->name << endl; // This is member "name", currently empty

        this->name = name; // this->name is pointing the member "name"
    }

    void get_info(){

        cout << "Name of the car : " << name <<endl;
        
        // you can print the address of the object using this pointer
        cout << "Object address : " << this << endl; 
    }

};

int main()
{

    car c1("Regra");    

    c1.get_info();

    return 0;
}
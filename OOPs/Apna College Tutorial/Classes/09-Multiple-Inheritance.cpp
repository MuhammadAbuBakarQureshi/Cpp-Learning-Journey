#include <iostream>
#include <string>

using namespace std;

class car
{

public:
    // Destructor

    ~car()
    {

        cout << "I'm based class destructor" << endl;
    }

    // Constructor

    car(string name, double price) : name(name), price(price) {}

    // Members

    string name;
    double price;
};

class suv : public car
{

public:
    // Destructor

    ~suv()
    {

        cout << "I'm derived class destructor" << endl;
    }

    // Constructor

    // If bass class has parameterized constructor the we pass the arguments from derived constructor

    suv(string name, string type, double price) : car(name, price)
    {

        this->type = type;
    }

    string type;

};

class company: public suv{

public:

    string brand;

    // Constructor

    company(string name, string type, string brand, double price): suv(name, type, price){

        this->brand = brand;
    }

    void get_info()
    {

        cout << "car name is " << name << endl;

        cout << name << " is a " << brand << " brand." << endl;

        cout << name << " is a " << type << endl;

        cout << name << " price is " << price << endl;
    }

};

int main()
{

    company car1("Urus", "SUV", "Lamborgini", 300000);

    car1.get_info();

    return 0;
}
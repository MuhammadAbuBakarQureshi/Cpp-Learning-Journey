#include <iostream>
#include <string>

using namespace std;

class car
{

public:

    string name;
    double price;
};

class CarType
{

public:

    string type;
};

class company: public CarType, public car{

public:

    string brand;

    // Constructor

    company(string name, string type, string brand, double price){

        this->name = name;
        this->type = type;
        this->brand = brand;
        this->price = price;
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
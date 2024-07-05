#include <iostream>
#include <string>

using namespace std;

class car{

public:

    string name;
    string year;
    int horse_power;
    int price;

    // This is parameterized Constructor
    car(string name, string year, int hp, int price){

        this->name = name;
        horse_power = hp;
        this->year = year;
        this->price = price;

    }

    // This is Custom Copy Constructor
    car(car &original_object){

        cout << "I am custom copy constructor...\n" << endl;

        this->name = original_object.name;
        horse_power = original_object.horse_power;
        this->year = original_object.year;
        this->price = original_object.price;
    }


    void get_info(){

        cout << "Car name is " << name << endl;

        cout << name << " release year is " << year << endl;

        cout << name << " have " << horse_power << " horsepower" << endl;

        cout << name << " price is $" << price << endl;
    }

};

int main()
{

    car c1("Regra", "2015", 1115, 710200);

    // c1.get_info();

    car c2(c1); // custom copy constructor invoke

    c2.get_info();

    return 0;
}
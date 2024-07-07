#include <iostream>
#include <string>

using namespace std;

class car {

public:

    string name;
    float* price = new float;

    // Constructor

    car(string name, float price){

        this->name = name; 
        *this->price = price;
    }

    // Destructor

    ~car(){

        delete price;
    }

    // Print information

    void get_info(){

        cout << "Car name is " << name << endl;

        cout << name << " price is " << *price << endl;
    }

};

int main()
{

    car c1("regra", 100000);

    c1.get_info();  

    car c2(c1);

    c2.get_info();

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

class car
{

public:
    string name;
    float *pricePtr = new float;

    car(string name, float price)
    {

        this->name = name;
        *pricePtr = price;
    }

    // shallow copy constructor

    // If we change the price of "c2" it will automatically change the price of "c1" in shallow copy

    // car(car &obj){

    //     this->name = obj.name;
    //     this->pricePtr = obj.pricePtr;
    // }

    // Deep copy constructor

    car(car &obj)
    {

        this->name = obj.name;
        pricePtr = new float;
        *pricePtr = *obj.pricePtr;
    }

    void get_info()
    {

        cout << "Car name is " << name << endl;
        cout << name << " Price is " << *pricePtr << endl;
    }
};

int main()
{

    // car c1("regra", 10000);

    // car c2(c1);

    // c1.get_info();

    // *c2.pricePtr = 20000; // If we change the price of "c2" it will automatically change the price of "c1" in shallow copy

    // c1.get_info();

    // To avoid these problems we need to make deep copy

    //

    //

    car c1("regra", 10000);

    car c2(c1);

    c1.get_info();

    *c2.pricePtr = 20000;

    c1.get_info();

    return 0;
}
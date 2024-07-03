#include <iostream>
#include <string>

using namespace std;

class car
{
    // Properties /attributes
public:
    string name;
    string model;
    int year;
    int price;

    // Methods
    void changePrice(int new_Price)
    {

        price = new_Price;
    }
};
        
int main()
{

    car c1;

    c1.price = 20000;

    cout << c1.price << endl;

    c1.changePrice(10000);

    cout << c1.price << endl;

    return 0;
}
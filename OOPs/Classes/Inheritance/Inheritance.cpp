#include <iostream>

using namespace std;

int main()
{

    // Base Class
    class Engine
    {

    public:
        string power = "1500 HP";
    };

    // Derived Class
    class car : public Engine
    {

    public:
        string model = "Super Sport";
    };

    car myCar;

    cout << "Car Power : " << myCar.power << endl; //power property is inherit from "Engine" class

    cout << "Car Model : " << myCar.model << endl;

    return 0;
}
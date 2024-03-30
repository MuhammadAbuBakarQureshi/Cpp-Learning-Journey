#include <iostream>

using namespace std;

class car
{

public:
    string name;
    string model;
    int year;

    car(string x, string y, int z)
    {
        name = x;
        model = y;
        year = z;
    }
};

int main()
{
    car Bugatti("Chiron", "Super Sport", 2022);
    car Porsche("Taycan", "Turbo S", 2022);

    cout << Bugatti.name << " " << Bugatti.model << " " << Bugatti.year << endl;
    cout << Porsche.name << " " << Porsche.model << " " << Porsche.year << endl;


    return 0;
}
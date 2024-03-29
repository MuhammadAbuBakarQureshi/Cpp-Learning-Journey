#include <iostream>

using namespace std;

int main()
{

    struct car
    {
        string brand;
        string model;
        string year;
    };

    car chiron;
    chiron.brand = "Bugatti";
    chiron.model = "Super Sport";
    chiron.year = "2021";

    car taycan;
    taycan.brand = "Porsche";
    taycan.model = "Turbo S";
    taycan.year = "2020";

    cout << chiron.brand << " " << chiron.model << " " << chiron.year << endl;
    cout << taycan.brand << " " << taycan.model << " " << taycan.year << endl;

    return 0;
}
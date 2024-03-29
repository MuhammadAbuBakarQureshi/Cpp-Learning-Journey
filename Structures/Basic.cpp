#include <iostream>

using namespace std;

int main()
{

    struct
    {
        string gasoline;
        string Electric;
    } cars;

    cars.gasoline = "Chiron";
    cars.Electric = "Taycan";

    cout << "Gasoline car : " << cars.gasoline << endl;

    cout << "Electric car : " << cars.Electric << endl;

    return 0;
}
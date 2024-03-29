#include <iomanip>

#include <iostream>

using namespace std;

int main()
{

    // double can hold up to 15 decimal digits accurately

    double value_double = 5.123456789;

    // float can hold up to 7 decimal digits accurately

    float value_float = 5.123456789;

    cout << setprecision(12);

    cout << "Double : " << value_double << endl; // 5.123456789

    cout << "Float : " << value_float << endl; // 5.12345695496

    return 0;
}
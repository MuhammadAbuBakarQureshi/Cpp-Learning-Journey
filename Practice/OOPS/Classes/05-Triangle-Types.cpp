#include <iostream>
#include <string>

using namespace std;

// Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides.
// Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

class Triangle
{

private:
    double length_1;
    double length_2;
    double length_3;

public:
    // Constructor

    Triangle(double length_1, double length_2, double length_3)
    {

        this->length_1 = length_1;
        this->length_2 = length_2;
        this->length_3 = length_3;
    }

    // Check Equilateral Triangle

    void is_equilateral()
    {

        if (length_1 == length_2 && length_2 == length_3)
        {

            cout << "It is equilateral" << endl;
        }
        else
        {

            cout << "It is not equilateral" << endl;
        }
    }

    // Check Isosecels Triangle

    void is_isosecels()
    {
        if (length_1 == length_2 && length_2 == length_3)
        {

            cout << "It is not isosecels" << endl;
        }

        else if (length_1 == length_2 || length_1 == length_3 || length_2 == length_3)
        {
            
            cout << "It is isosecels" << endl;
        }
        else
        {

            cout << "It is not isosecels" << endl;
        }
    }

    // Check Scalene Triangle

    void is_scalene()
    {

        if (length_1 != length_2 && length_2 != length_3)
        {

            cout << "It is scalene triangle" << endl;
        }
        else
        {

            cout << "It is not scalene tringle" << endl;
        }
    }
};

int main()
{

    double length_1, length_2, length_3;

    cout << "Enter First side of triangle = ";

    cin >> length_1;

    cout << "Enter Second side of triangle = ";

    cin >> length_2;

    cout << "Enter Third side of triangle = ";

    cin >> length_3;

    Triangle t1(length_1, length_2, length_3);

    t1.is_equilateral();

    t1.is_isosecels();

    t1.is_scalene();

    return 0;
}
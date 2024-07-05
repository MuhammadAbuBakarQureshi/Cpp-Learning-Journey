#include <iostream>
#include <string>
#include <math.h>

using namespace std;
// 1. Write a C++ program to implement a class called Circle that has private member 
//variables for radius. Include member functions to calculate the circle's area and 
//circumference. 

const float pi = 3.14;

class circle{

private:

    double radius;

public:

    // using parameterized constructor

    circle(double radius): radius(radius){}

    // Circle Area

    double circle_area(){

        return pi * pow(radius, 2);
    }

    // Circle Circumference

    double circle_circumference(){

        return 2 * pi * radius;
    }

};

int main(){

    cout << "Enter radius of the circle = ";

    double radius;

    cin >> radius;

    circle first(radius);

    cout << "\n\nRadius of the circle is = " << radius << endl;

    cout << "Area of the circle = " << first.circle_area() << endl;

    cout << "Circumference of the circle = " << first.circle_circumference() << endl;

    return 0;

}
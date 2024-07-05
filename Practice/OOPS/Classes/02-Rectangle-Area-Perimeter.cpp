#include <iostream>
#include <string>

using namespace std;

/* Write a C++ program to create a class called Rectangle that has private member 
variables for length and width. 
Implement member functions to calculate the rectangle's area 
and perimeter.*/

class Rectangle{

private:

    double length, width;

public:

    Rectangle(double length, double width): length(length), width(width) {}

    // Area of Rectangle

    double rectangle_area(){

        return length * width;
    }

    // Perimeter of Rectangle

    double rectangle_perimeter(){

        return (length + width) * 2;
    }

};

int main()
{

    double length, width;

    cout << "Enter length of rectangle = ";

    cin >> length;

    cout << "Enter width of rectangle = ";

    cin >> width;

    Rectangle r1(length, width);

    cout << "Area of rectangle = " << r1.rectangle_area() << endl;

    cout << "Perimeter of rectangle = " << r1.rectangle_perimeter() << endl;

    return 0;
}
#include <iostream>
#include <string>
#include <math.h>

// Write a C++ program to implement a class called Shape with virtual member functions for calculating area and perimeter.
// Derive classes such as Circle, Rectangle, and Triangle from the Shape class and override virtual functions accordingly.

const float pi = 3.14;

class Shape
{

public:
    virtual double calculate_area() = 0;

    virtual double calculate_perimeter() = 0;
};

class Circle : public Shape
{

private:
    double radius;

public:
    // Constructor

    Circle(double radius) : radius(radius) {}

    double calculate_area()
    {

        return pi * pow(radius, 2);
    }

    double calculate_perimeter()
    {

        return 2 * pi * radius;
    }
};

class Rectangle : public Shape
{

private:
    double length;
    double width;

public:
    // Constructor

    Rectangle(double l, double w): length(l), width(w){}

    double calculate_area()
    {

        return length * width;
    }

    double calculate_perimeter()
    {

        return 2 * (length + width);
    }
};


class Triangle: public Shape{

private:
    double base;
    double height;
    double side_1;
    double side_2;
    double side_3;

public:

    // Constructor

    Triangle(double b, double h, double s1, double s2, double s3): base(b), height(h), side_1(s1), side_2(s2), side_3(s3) {}

    double calculate_area()
    {

        return (base * height) / 2;
    }

    double calculate_perimeter()
    {

        return side_1 + side_2 + side_3;
    }
};

using namespace std;

int main()
{

    // Circle

    Circle c1(12);

    cout << "Circle Radius = 12" << endl;

    cout << "\nCircle Area = "  <<    c1.calculate_area() << endl;

    cout << "\nCircle perimeter = " << c1.calculate_perimeter() << endl;

    // Rectangle

    Rectangle r1(12, 23);

    cout << "\n\n\nLength = 12 \nWidth = 23" << endl;

    cout << "\nRectangle Area = " << r1.calculate_area() << endl;

    cout << "\nRectangle Perimeter = " << r1.calculate_perimeter() << endl; 

    // Triangle

    Triangle t1(31, 12, 5, 5, 3);

    cout << "\n\n\nBase = 31 \nHeight = 12 \nSide 1 = 5 \nSide 2 = 5 \nSide 3 = 3" << endl;

    cout << "\nTriangle Area = " << t1.calculate_area() << endl;

    cout << "\nTriangle Perimeter = " << t1.calculate_perimeter() << endl; 

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Shape
{

    virtual void draw() = 0; // THis is pure virtual function

    // If any class have pure virtual function it is automatically considered as abstract class

    // Now, we cannnot make objects of this class
};

class Circle : public Shape
{

public:

    void draw(){

        cout << "Drawing a circle" << endl;
    }
};

int main()
{

    Circle c1;

    c1.draw();

    return 0;
}
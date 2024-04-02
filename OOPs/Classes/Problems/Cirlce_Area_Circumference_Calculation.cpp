#include <iostream>

using namespace std;

const float pi = 3.14;

class Circle
{
private:
    float radius;

public:
    void setRadius(float r)
    {

        radius = r;
    }

    void CirlceArea()
    {

        float result = pi * (radius * radius);

        cout << "Circle's area is : " << result << endl;
    }

    void CircleCircumference()
    {

        float result = 2 * pi * radius;

        cout << "Circle's Circumference is : " << result << endl;
    }
};

int main()
{

    Circle circle;

    circle.setRadius(10);

    circle.CirlceArea();

    circle.CircleCircumference();

    return 0;

}
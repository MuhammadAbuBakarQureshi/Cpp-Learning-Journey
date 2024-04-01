#include <iostream>

using namespace std;

class Triangle
{

private:
    float side_1;
    float side_2;
    float side_3;

public:
    Triangle(float a, float b, float c)
    {

        side_1 = a;
        side_2 = b;
        side_3 = c;
    }

    int trianglePerimeter()
    {

        float result = side_1 + side_2 + side_3;
        return result;
    }
};

int main()
{
    Triangle triangle(5, 8, 3);

    cout << "Perimeter of triangle is : " << triangle.trianglePerimeter() << endl;

    return 0;
}
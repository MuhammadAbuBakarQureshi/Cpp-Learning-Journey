#include <iostream>

using namespace std;

class Area
{
private:
    float length;
    float width;

public:
    Area(float l, float w)
    {

        length = l;
        width = w;
    }

    int returnArea()
    {

        float result = length * width;
        return result;
    }
};

int main()
{

    float length, width;

    cout << "Enter length of the rectangle : ";

    cin >> length;

    cout << "Enter width of the rectangle : ";

    cin >> width;

    Area a(length, width);

    cout << "Area of Reactangle is : " << a.returnArea() << endl;

    return 0;
}
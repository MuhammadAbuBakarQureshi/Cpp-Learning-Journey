#include <iostream>

#include <math.h>

using namespace std;

int main()
{

    float a, b, c;

    cout << "Enter value of a : ";

    cin >> a;

    cout << "Enter value of b : ";

    cin >> b;

    cout << "Enter value of c : ";

    cin >> c;

    float discriminant, x1, x2, realPart, imaginaryPart;

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {

        cout << "Roots are real and different" << endl;

        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "x1 = " << x1 << endl
             << "x2 = " << x2 << endl;
    }
    else if (discriminant == 0)
    {
        cout << "Roots are real and same" << endl;

        x1 = (-b) / (2 * a);

        cout << "x1 = " << x1 << endl;
    }
    else if (discriminant < 0)
    {

        realPart = (-b) / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);

        cout << "Roots are complex and different." << endl;
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
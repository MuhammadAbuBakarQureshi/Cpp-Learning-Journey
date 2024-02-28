#include <iostream>

using namespace std;

bool check(int x, int y, int z)
{

    if (x > y && x > z)
    {
        if (x * x == y * y + z * z)
        {

            return true;
        }
        else
        {

            return false;
        }
    }
    else if (y > x && y > z)
    {

        if (y * y == x * x + z * z)
        {

            return true;
        }
        else
        {

            return false;
        }
    }
    else
    {

        if (z * z == y * y + x * x)
        {

            return true;
        }
        else
        {

            return false;
        }
    }
}

int main()
{

    int x, y, z;

    cout << "Input First Number : ";

    cin >> x;

    cout << "Input Second Number : ";

    cin >> y;

    cout << "Input Third Number : ";

    cin >> z;

    cout << endl;

    if (check(x, y, z))
    {

        cout << "Pythagorean Triplet";
    }
    else
    {

        cout << "Non-Pythagorean Triplet";
    }

    return 0;
}

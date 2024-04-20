#include <iostream>

using namespace std;

void initialize(int *num1, int *num2, int *num3);

void maximumNo(int *num1, int *num2, int *num3, int *maximum);

void minimumNo(int *num1, int *num2, int *num3, int *minimum);

int main()
{

    int num1, num2, num3, maximum, minimum;

    initialize(&num1, &num2, &num3);

    maximumNo(&num1, &num2, &num3, &maximum);

    minimumNo(&num1, &num2, &num3, &minimum);

    cout << "Greatest value is : " << maximum << endl;

    cout << "Smallest value is : " << minimum << endl;

    return 0;
}

void initialize(int *num1, int *num2, int *num3){

    cout << "Enter the First number : ";

    cin >> *num1;

    cout << "Enter the Second number : ";

    cin >> *num2;

    cout << "Enter the third number : ";

    cin >> *num3;
}

void maximumNo(int *num1, int *num2, int *num3, int *maximum)
{

    *maximum = *num1;

    if (*num2 > *maximum)
    {

        *maximum = *num2;
    }

    if (*num3 > *maximum)
    {

        *maximum = *num3;
    }
}

void minimumNo(int *num1, int *num2, int *num3, int *minimum)
{

    *minimum = *num1;

    if (*num2 < *minimum)
    {

        *minimum = *num2;
    }

    if (*num3 < *minimum)
    {

        *minimum = *num3;
    }
}
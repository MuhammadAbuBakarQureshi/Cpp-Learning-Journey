#include <iostream>

using namespace std;

// Function to check the Maximum number

int maxNo(int a, int b)
{

    return a > b ? a : b;
}

// Function to check the Minimum number

int minNo(int a, int b)
{

    return a < b ? a : b;
}

int main()
{

    // Input from user store in integer "n"
    // "n" tells the size of array

    int n;

    cout << "Input The Size Of Array : ";

    cin >> n;

    int array[n]; // Here we make the array with "n" length

    // We run this for loop to store values in array

    for (int i = 0; i < n; i++)
    {

        cout << endl;

        cout << "Input The Value Of " << i << " Index : ";

        cin >> array[i];
    }

    int max = INT_MIN;

    int min = INT_MAX;

    // we run this loop to get MAX and MIN value from the array

    for (int i = 0; i < n; i++)
    {

        max = maxNo(max, array[i]);

        min = minNo(min, array[i]);
    }

    cout << "Maximum Number is : " << max << endl;

    cout << "Minimum Number is : " << min << endl;

    return 0;
}
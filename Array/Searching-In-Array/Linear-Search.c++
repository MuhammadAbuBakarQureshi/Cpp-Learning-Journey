#include <iostream>

using namespace std;

int linearSearch(int key, int n, int array[])
{

    for (int i = 0; i < n; i++)
    {
        if (key == array[i])
        {

            return i;
        }
    }
    return -1;
}

int main()
{

    int n; // Input the size of array

    cout << "Input The Size Of Array : ";

    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++) // loop to store values in array
    {

        cout << endl;

        cout << "Input The Value of " << i << " Index : ";

        cin >> array[i];
    }


    cout << endl;

    int key; // Input the key to find in the array

    cout << "Input The Key To Find In This Array : ";

    cin >> key;

    cout << linearSearch(key, n, array); // Function to find that key in the array

    return 0;
}

#include <iostream>

using namespace std;

int main()
{

    int n;

    cout << "Input The Size Of Array : ";

    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++) // This Loop use to store values in array
    {

        cout << endl;

        cout << "Input The Value of " << i << " Index : ";

        cin >> array[i];
    }

    cout << "Input  : ";

    for (int i = 0; i < n; i++) // This Loop use to print array before sorting
    {

        cout << array[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n - 1; i++) // This loop use to sort array
    {
        for (int j = i + 1; j < n; j++)
        {

            if (array[j] < array[i])
            {

                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    cout << "Output : ";

    for (int i = 0; i < n; i++) // This loop use to print array after sorting
    {

        cout << array[i] << " ";
    }

    return 0;
}
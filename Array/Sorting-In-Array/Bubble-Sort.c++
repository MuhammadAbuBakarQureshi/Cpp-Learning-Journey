#include <iostream>

using namespace std;

int main()
{

    int n;

    cout << "Input The Size Of Array : ";

    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {

        cout << endl;

        cout << "Input The Value Of " << i << " Index : ";

        cin >> array[i];
    }

    cout << "Input  : ";

    for (int i = 0; i < n; i++)
    {

        cout << array[i] << " ";
    }

    cout << endl;

    int counter = 1;

    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (array[i] > array[i + 1])
            {

                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }

        counter++;
    }

    cout << "Output : ";

    for (int i = 0; i < n; i++)
    {

        cout << array[i] << " ";
    }

    return 0;
}
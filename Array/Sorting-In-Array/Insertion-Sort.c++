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

    for (int i = 1; i < n; i++)
    {

        int current = array[i];
        int j = i - 1;

        while (array[j] > current && j >= 0)
        {

            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = current;
        
    }

    cout << "Output : ";

    for (int i = 0; i < n; i++)
    {

        cout << array[i] << " ";
    }

    return 0;
}
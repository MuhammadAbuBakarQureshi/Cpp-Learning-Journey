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

        cout << "Please Input the value for " << i << " Index : ";

        cin >> array[i];
    }

    cout << "Array Contains: ";

    for (int i = 0; i < n; i++)
    {

        cout << array[i] << " ";
    }

    return 0;
}
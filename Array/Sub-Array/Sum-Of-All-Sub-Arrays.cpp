#include <iostream>

using namespace std;

int main()
{

    int n;

    cout << "Input The Size Of Array : ";

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Input The Value Of " << i << " Index : ";

        cin >> arr[i];
    }

    int sum = 0;

    cout << "Possible Sub Arrays Of This Array : " << n * ( n + 1) / 2 <<endl;

    for (int i = 0; i < n; i++)
    {

        sum = 0;

        for (int j = i; j < n; j++)
        {

            sum += arr[j];

            cout << sum << endl;
        }
    }

    return 0;
}
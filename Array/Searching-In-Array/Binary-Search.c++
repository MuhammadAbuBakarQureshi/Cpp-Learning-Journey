#include <iostream>

using namespace std;

int binarySearch(int n, int key, int arr[])
{

    int s = 0;

    int e = n;

    while (s <= e)
    {

        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {

            return mid;
        }
        else if (arr[mid] > key)
        {

            e = mid - 1;
        }
        else
        {

            s = mid + 1;
        }
    }

    return -1;
}

int main()
{

    int n;

    cout << "Input The Size Of Array : ";

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {

        cout << endl;

        cout << "Input the Value Of " << i << " Index : ";

        cin >> arr[i];
    }

    int key;

    cout << "Input The Value Of Key : ";

    cin >> key;

    cout << binarySearch(n, key, arr);

    return 0;
}
#include <iostream>

using namespace std;

int findSecondSmallest(int arrSize, int arr[])
{

    int first, second;

    first = second = INT_MAX;

    for (int i = 0; i < arrSize; i++)
    {

        if (arr[i] < first)
        {

            second = first;
            first = arr[i];
        }
        else if (arr[i] < second)
        {

            second = arr[i];
        }
    }

    return second;
}

int main()
{

    int n;

    cout << "Input The Size Of Arrray : ";

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {

        cout << endl;

        cout << "Input The Value Of " << i << " Index : ";

        cin >> arr[i];
    }

    int second_smallest = findSecondSmallest(n, arr);

    cout << "Second Smallest Number From The Array : " << second_smallest <<endl;

    return 0;
}
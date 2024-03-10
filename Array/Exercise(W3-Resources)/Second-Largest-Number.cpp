#include <iostream>

using namespace std;

void secondLargest(int arrSize, int arr[])
{

    int first = 0, second = 0;

    if (arrSize < 2)
    {

        cout << "Array Is Too Short To Perform This Task" << endl;
    }
    else
    {

        for (int i = 0; i < arrSize; i++)
        {
            if (arr[i] > first)
            {

                second = first;
                first = arr[i];
            }
            else if (arr[i] > second)
            {

                second = arr[i];
            }
        }

        cout << "Second Largest Number In The Array : " << second << endl;
    }
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

        cout << "Input The Value Of " << i << " Index : ";

        cin >> arr[i];
    }

    secondLargest(n, arr);

    return 0;
}
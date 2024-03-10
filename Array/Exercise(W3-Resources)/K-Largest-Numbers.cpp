#include <iostream>
#include <math.h>

using namespace std;

void largest(int arrSize, int arr[])
{

    // This Loop Is Used TO Sort Array

    for (int i = 0; i < arrSize - 1; i++)
    {
        for (int j = i + 1; j < arrSize; j++)
        {

            if (arr[j] < arr[i])
            {

                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    /////////////////////\\\\\\\\\\\\\\\\\\\\\\\


    int k;

    cout << "How Many Largest Number You Want From This Array : ";

    cin >> k;

    if (arrSize < k)
    {

        cout << "Invalid";
    }else{

    for (int i = arrSize - 1; i >= arrSize - k; i--)
    {

        cout << arr[i] << " ";
    }

    }
}

int main()
{

    int n;

    cout << "Input The Size Of Array : ";

    cin >> n; // Input the Size Of arr

    int arr[n]; // arr declare

    for (int i = 0; i < n; i++)
    { // input the value of arr indexes

        cout << endl;

        cout << "Input The Value Of " << i << " Index : ";

        cin >> arr[i];
    }

    largest(n, arr);

    return 0;
}
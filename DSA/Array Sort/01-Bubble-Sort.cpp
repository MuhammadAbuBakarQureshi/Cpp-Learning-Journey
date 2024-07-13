#include <iostream>

using namespace std;

int main()
{

    int arr[5] = {7, 12, 9, 11, 3};

    int n = size(arr);

    // Printing Input

    cout << "Before : ";

    for (int i = 0; i < n; i++){

        cout << arr[i] << " ";
    }

    // Algorithm

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < (n - 1 - i); j++)
        {

            if (arr[j] > arr[j + 1]){

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    // Printing output

    cout << "\nAfter  : "; 

    for(int i = 0; i < 5; i++){

        cout << arr[i] << " ";
    }

    return 0;
}
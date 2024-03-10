#include <iostream>
#include <math.h>

using namespace std;

void threeLargest(int arrSize, int arr[])
{
    int first = 0, second = 0, third = 0;

    if (arrSize < 4)
    {

        cout << "Array Is Too Short To Perform This Task" << endl;
    }
    else
    {

        for (int i = 0; i < arrSize; i++)
        {
            if (arr[i] > first)
            {
                third = second;
                second = first;
                first = arr[i];
            }
            else if (arr[i] > second)
            {

                third = second;
                second = arr[i];
            }
            else if (arr[i] > third)
            {
                third = arr[i];
            }
        }

        cout << "First Largest Number In The Array : " << first << endl;

        cout << "Second Largest Number In The Array : " << second << endl;

        cout << "Third Largest Number In The Array : " << third << endl;
    }
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

    threeLargest(n, arr);

    return 0;
}
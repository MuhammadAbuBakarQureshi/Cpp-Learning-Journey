#include <iostream>

using namespace std;


void swap(int &a, int &b)
{

    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int start, int end)
{

    int pivot = arr[end];

    int count = 0;

    for (int i = 0; i < end; i++)
    {

        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    int pivotIndex = start + count;

    swap(arr[end], arr[pivotIndex]);

    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] < arr[pivotIndex])
        {

            i++;
        }

        while (arr[j] > arr[pivotIndex])
        {

            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {

            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

int quick_sort(int arr[], int start, int end)
{

    // Base Case
    if (start >= end)
        return 0;

    int p = partition(arr, start, end);

    quick_sort(arr, start, p - 1);

    quick_sort(arr, p + 1, end);

    return 0;
}

int main()
{

    int arr[5] = {3, 1, 4, 5, 2};

    int arr_size = size(arr);

    quick_sort(arr, 0, arr_size - 1);

    for(int i = 0; i < arr_size; i++){

        cout << arr[i] << " ";
    }cout <<  endl;

    return 0;
}
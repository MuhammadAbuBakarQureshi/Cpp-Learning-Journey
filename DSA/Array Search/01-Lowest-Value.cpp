#include <iostream>

using namespace std;

int main()
{

    int arr[4] = {7, 3, 5, 4};

    int min_val = arr[0];

    for (int i = 0; i < 4; i++)
    {
        int current = arr[i];

        if (min_val > current){

            min_val = current;
        }
    }

    cout << "Lowest is : " << min_val << endl;

    return 0;
}
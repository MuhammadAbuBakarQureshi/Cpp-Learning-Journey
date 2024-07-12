#include <iostream>

using namespace std;

int global_count = 5;

void fibonacci_Sequence(int first, int second)
{

    if (global_count > 0)
    {

        cout << first << " ";

        int next = first + second;

        first = second;

        second = next;

        global_count--;

        fibonacci_Sequence(first, second);
    }
}

int main()
{

    cout << "Enter how many numbers of fibonacci sequence you want to print : ";

    cin >> global_count;

    fibonacci_Sequence(0, 1);

    return 0;
}
#include <iostream>

using namespace std;

// int add(int a, int b)
// {

//     return a + b; // Return the sum
// }

// If you want to write add() function after main() function
// Then you have to write prototype function above the main function


int add(int, int);// Prototype for the add() function

int main()
{

    int a;

    cout << "Input the vlaue of a: ";

    cin >> a; // Input the value of a

    int b;

    cout << "Input the vlaue of b: ";

    cin >> b; // Input the value of b

    cout << "Sum of a and b is : " << add(a, b) << endl; // Call the function add() and print the sum

    return 0;
}



int add(int a, int b)
{

    return a + b; // Return the sum
}

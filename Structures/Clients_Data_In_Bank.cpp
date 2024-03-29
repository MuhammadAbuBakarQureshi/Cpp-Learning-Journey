#include <iostream>

using namespace std;

/*
1 - Write a function to print the names of all the customers having balance less than $200.
2 - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance
*/

void Balance(string name, int balance)
{

    if (balance < 200)
    {

        cout << name << " has less than 200$ balance";
    }
    else if (balance > 1000)
    {

        balance = balance + 100;

        cout << "Incremented balance of " << name << " is : " << balance << endl;
    }
}

int main()
{

    struct client
    {

        string name;
        string account_no;
        int balance;
    };

    client data[2];

    int nums_client = 2;

    for (int i = 0; i < nums_client; i++)
    {

        cout << "Enter full name of client : ";

        getline(cin, data[i].name);

        cout << "Enter " << data[i].name << " account_no : ";

        getline(cin, data[i].account_no);

        cout << endl;
    }

    for (int j = 0; j < nums_client; j++)
    {

        cout << "Enter " << data[j].name << " balance : ";

        cin >> data[j].balance;

        cout << endl;
    }

    for (int i = 0; i < nums_client; i++)
    {

        Balance(data[i].name, data[i].balance);
        cout << endl;
    }

    return 0;
}
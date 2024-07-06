#include <iostream>
#include <string>

using namespace std;

/*Write a C++ program to implement a class called BankAccount that has private member
variables for account number and balance. Include member functions to deposit and
withdraw money from the account.*/

class BankAccount
{

private:
    double account_number, balance;

public:
    BankAccount(double balance) : balance(balance) {}

    // deposit

    void deposit(double deposit_amount)
    {

        balance += deposit_amount;
    }

    double show_balance()
    {

        return balance;
    }

    // Withdraw

    void withdraw(double withdraw_amount)
    {

        balance = balance - withdraw_amount;
    }
};

int main()
{

    BankAccount b1(10000);

    bool exit = false;

    while (!exit)
    {

        cout << "\n\n1. Balance.\n2. Deposit.\n3. Withdraw.\n4. Exit.\n"
             << endl;

        cout << "Enter your choice : ";

        int choice;

        cin >> choice;

        switch (choice)
        {

        case 1:

            cout << "Current balance = " << b1.show_balance() << endl;
            break;

        case 2:

            cout << "How much amount you want to deposit = ";

            double deposit_amount;

            cin >> deposit_amount;

            b1.deposit(deposit_amount);

            break;

        case 3:

            cout << "How much amount you want to with draw = ";

            double withdraw_amount;

            cin >> withdraw_amount;

            b1.withdraw(withdraw_amount);

            break;

        case 4:

            exit = true;

        default :

            cout << "Enter correct choice" << endl;
            break;
        }
    }

    return 0;
}
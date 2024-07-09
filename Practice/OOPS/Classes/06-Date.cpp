#include <iostream>
#include <string>

using namespace std;

// Write a C++ program to implement a class called Date that has private member variables for day, month, and year.
// Include member functions to set and get these variables, as well as to validate if the date is valid.

class Date
{

private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y){};

    // set date

    void set_date(int d, int m, int y)
    {

        day = d;
        month = m;
        year = y;
    }

    // get day

    int get_day()
    {

        return day;
    }

    // get month

    int get_month()
    {

        return month;
    }

    // get year

    int get_year()
    {

        return year;
    }

    bool is_valid_date()
    {

        if ((day > 31 or day < 1) or (month > 12 or month < 1) or (year > 2024))
        {

            return false;
        }
        else
        {

            if (((month == 4) or (month == 6) or (month == 9) or (month == 11)) and day > 30)
            {

                return false;
            }
            else
            {

                // check is it leap year

                if ((year % 4 == 0) or (year % 400 == 0) and (year % 100 != 0))
                {

                    if (day > 29)
                    {

                        return false;
                    }
                }
                else
                {

                    if (day > 28)
                    {

                        return false;
                    }
                }
            }
        }

        // if date is valid

        return true;
    }
};

int main()
{
    Date d1(0, 0, 0); // intialized with default

    int day, month, year;

    cout << "Enter day : ";

    cin >> day;

    cout << "Enter month : ";

    cin >> month;

    cout << "Enter year : ";

    cin >> year;

    // set date

    d1.set_date(day, month, year);

    cout << "Day = " << d1.get_day() << endl;
    cout << "Month = " << d1.get_month() << endl;
    cout << "Year = " << d1.get_year() << endl;

    if (d1.is_valid_date())
    {

        cout << "Date is valid" << endl;
    }
    else
    {

        cout << "Date is not valid" << endl;
    }
    return 0;
}
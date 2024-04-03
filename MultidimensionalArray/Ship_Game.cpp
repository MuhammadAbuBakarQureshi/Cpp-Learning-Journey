#include <iostream>

using namespace std;

int main()
{

    bool ships[4][4] = {
        {0, 0, 1, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
    };

    int hit = 0;
    int numberOfTurns = 0;

    while (hit < 4)
    {

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {

                cout << ships[i][j] << "  ";
            }

            cout << endl;
        }

        int row, column;

        cout << "Selecting cordinates" << endl;

        cout << "Chose a row number between 0 and 3 : ";

        cin >> row;

        cout << "Chose a column number between 0 and 3 : ";

        cin >> column;

        if (ships[row][column])
        {

            ships[row][column] = 0;

            hit++;

            cout << "\nHit! " << (4 - hit) << " Left" << endl;
        }
        else
        {

            cout << "\nMiss" << endl;
        }

        numberOfTurns++;
    }

    cout << "Victory" << endl;
    cout << "Won in " << numberOfTurns << " Turns." << endl;

    return 0;
}
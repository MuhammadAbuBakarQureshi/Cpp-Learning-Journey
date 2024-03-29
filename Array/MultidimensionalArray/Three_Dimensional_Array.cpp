#include <iostream>

using namespace std;

int main(){

        string cars[2][2][4] = {

        {{"Mustang", "Regra", "Jesko", "Chiron"},
         {"Tesla", "Nevara", "Taycan", "Revuelto"}},

        {{"V6", "V8", "V10", "V12"},
         {"Motors", "SRM", "PMSM", "Dark Motors"}}};

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {

                cout << " " << cars[i][j][k];
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}
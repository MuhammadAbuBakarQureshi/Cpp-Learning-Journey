#include <iostream>

using namespace std;

class Hero
{

    int health;

    int level;

public:
    int getHealth()
    {

        return health;
    }

    int getLevel()
    {

        return level;
    }

    void setHealth(int h)
    {

        health = h;
    }

    void setLevel(int chr)
    {

        level = chr;
    }
};

int main()
{

    Hero ali;

    ali.setHealth(50);

    cout << "Ali's health is : " << ali.getHealth() << endl;

    ali.setLevel(7);

    cout << "Ali's level is : " << ali.getLevel() << endl;

    return 0;
}
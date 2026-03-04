#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
using namespace std;

class Player{
    private:

    string name;
    int health;
    int maxHealth;
    int attackPower;

    public:
    Player();
    Player(string name, int health, int attackPower);
    void takeDamage(int damage);
    string getname() const;
    int gethealth() const;
    int getmaxHealth() const;
    int getattackPower() const;
    void displayStatus() const;
    ~Player();
};

#endif
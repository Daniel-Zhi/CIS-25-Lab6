#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "Inventory.h"
using namespace std;

class Player{
    private:

    string name;
    int x;
    int y;
    int health;
    int maxHealth;
    int attackPower;
    Inventory inventory;

    public:
    Player();
    Player(int capasity, string name, int health, int attackPower, int x, int y);
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    void takeDamage(int damage);
    string getname() const;
    int gethealth() const;
    int getmaxHealth() const;
    int getattackPower() const;
    void displayStatus() const;
    void showInventory() const;
    void addItem(const Item& item);
    ~Player();
};

#endif
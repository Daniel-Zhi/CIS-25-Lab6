# include "Player.h"

    Player::Player(){
        name = "Hero";
        health = 100;
        maxHealth = 100;
        attackPower = 10;
    }

    Player::Player(int capacity, string name, int health, int attackPower) : inventory(capacity), name(name), health(health), maxHealth(health), attackPower(attackPower) 
    {}//I asked AI about this part because if I want to aquire the lab's standard of signiture, I have to modify my inventory with a capacity
    //But the thing is I had already initialized the inventory at the moment I declare it in the private part, and I can't modify it any more,
    //only leaving me no choice but to use a member initialization list. When I first learn about this format, I didn't know it was this helpful,
    //Now I think this is the only way to do this. I tried writing a temp inventory and copy it to the class, but it just comes back to the
    //shallow copy issues. This was a fun experience to work with. If it is me without the AI, I would tried to write a new function to access the
    //private "inventory" and modify it. But it doesn't acquire the requirements. SO...... If you have any ideas how to do this part, please let me know.

    void Player::takeDamage(int damage){
        cout << name << " takes a "<< damage<<" damage!" << endl;
        if(damage > health){
            health = 0;
        }
        else{
            health -= damage;
        }
    }
    string Player::getname() const{
        return name;
    }
    int Player::gethealth() const{
        return health;
    }
    int Player::getmaxHealth() const{
        return maxHealth;
    }
    int Player::getattackPower() const{
        return attackPower;
    }
    void Player::displayStatus() const{
        cout << name << " - HP: " << health << "/" << maxHealth<< endl << endl;
        if(health == 0){
            cout << name << " couldn't tolerate the pain, destroyed"<< endl << endl;
        }
    }
    void Player::showInventory() const{
        inventory.display();
    }
    void Player::addItem(const Item& item){
        inventory.addItem(item);
    }
    Player::~Player(){
        cout << "\nThe Player "<< name <<" is destroyed!" << endl;
        cout << "Inventory for " << name << " has been destroyed!" << endl;
    }


    string name;
    int health;
    int maxHealth;
    int attackPower;
# include "Player.h"

    Player::Player(){
        name = "Hero";
        health = 100;
        maxHealth = 100;
        attackPower = 10;
    }
    Player::Player(string name, int health, int attackPower){
        this->name = name;
        this->health = health;
        maxHealth = health;
        this->attackPower = attackPower;
    }
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
    Player::~Player(){
        cout << "The Player "<< name <<" is destroyed!" << endl;

    }


    string name;
    int health;
    int maxHealth;
    int attackPower;
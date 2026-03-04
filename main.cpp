#include "Player.h"

int main(){
    Player hero;
    Player wizard("Dumbodoor", 120, 15);
    hero.displayStatus();
    hero.takeDamage(25);
    hero.displayStatus();
    wizard.takeDamage(150);
    wizard.displayStatus();

}
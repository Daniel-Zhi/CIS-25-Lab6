#include "Player.h"
#include <cstdlib>


int main(){
    srand(time(0));
    Player hero(10, "Danjun", 100, 20);
    hero.showInventory();
    Item i1("Cat_of_Uncertainty", rand());
    Item::incrementTotalItems();
    hero.addItem(i1);
    hero.showInventory();
    Item i2("Fallen_Apple", 980);
    Item::incrementTotalItems();
    hero.addItem(i2);
    hero.showInventory();
    Item i3("Dark_Sphere", 888888);
    Item::incrementTotalItems();
    Item i4("Staff_Of_Gunpowder", 662);
    Item::incrementTotalItems();
    hero.addItem(i4);
    hero.showInventory();
    Item i5;
    Item::incrementTotalItems();
    hero.addItem(i5);
    hero.showInventory();



}
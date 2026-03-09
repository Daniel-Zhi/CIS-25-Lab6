#include "Inventory.h" 

Inventory(int capacity){
    this->capacity = capacity;
    items = 0;
    
}
~Inventory();
bool addItem(const Item& item);
void display() const;
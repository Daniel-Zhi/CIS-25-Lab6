#include "Inventory.h" 

Inventory::Inventory(int capacity){
    this->capacity = capacity;
    itemCount = 0;
    items = new Item[capacity];
}
Inventory::~Inventory(){
    delete[] items;
}
bool Inventory::addItem(const Item& item){
    if(capacity > itemCount){
        items[itemCount] = item;
    }
}
void Inventory::display() const;
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
        Item::incrementTotalItems();
        itemCount++;
        cout << "\nAn item was found: [" << item.getname() << "] (Value: " << item.getvalue() <<")" <<endl; 
        return true;
    }
    else 
        return false;
}
void Inventory::display() const{
    cout << "\nInventory (" << itemCount << "/" << capacity <<") :" << endl;
    for(int i = 0; i < itemCount; i++){
        items[i].display();
        cout << endl;
    }
}
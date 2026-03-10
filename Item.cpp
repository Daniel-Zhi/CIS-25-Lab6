#include "Item.h"

int Item::totalItems = 0; 
Item::Item(string name, int value){
    this->name = name;
    this->value = value;
}
int Item::getTotalItems(){
    return totalItems;
}
void Item::incrementTotalItems(){
    totalItems++;
}
string Item::getname() const{
    return name;
}
int Item::getvalue() const{
    return value;
}
void Item::display() const{
    cout<< "[" << name <<"] (Value: [" << value <<"])"; 
}
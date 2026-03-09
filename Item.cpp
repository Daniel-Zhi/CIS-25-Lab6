#include "Item.h"

Item::totalItems = 0; 
Item(string name = "Scrap", int value = 0){
    
}
int getTotalItems(){
    return totalItems;
}
void incrementTotalItems(){
    cout << "An item was added: [" << name << "]"; 
    itemCount++;
}
string getname() const{
    return name;
}
int getvalue() const{
    return value;
}
void display() const{
    cout<< "[" << name <<"] (Value: [" << value <<"]"; 
}
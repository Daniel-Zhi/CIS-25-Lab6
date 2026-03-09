#include "Item.h"

class Inventory{
    private:
    int items;
    int capacity;
    int itemCount;

    public:
    Inventory(int capacity);
    ~Inventory();
    bool addItem(const Item& item);
    void display() const;
}
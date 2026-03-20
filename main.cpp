#include "Game.h"
#include <iostream>
#include <cstdlib>


int main(){
    try{
        Game g1;
        g1.run();
        Game costum_g2(10, "Dumbodoor", 210, 90, 4,4, 30, 30);
        costum_g2.run();
    }

    catch(const exception& error) {
        cerr << "Error: " <<error.what() << endl;
    }


}
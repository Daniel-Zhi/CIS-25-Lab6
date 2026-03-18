include "Map.h"
include <iostream>

using namespace std;


Map(int width, int height, Player* player): width(width), height(height), playerPtr(player){
    player->x = 1;
    player->y = 1;
    grid = new char* [height];
    for(int r = 0; r < height; i++){
        grid[r] = new char[weight]; 
    }
    for(int r = 0; r < height; r++){
        for(int c = 0; c < weight ; c++){
            grid[i][c] = '#';
        }
    } //used for broader '#'s
    for(int r = 1; r < height - 1; r++){
        for(int c = 1; c < weight - 1; c++){
            grid[r][c] = '.';
        }
    } //used for inner cells

~Map(){
    delete 
}

void draw() const{
    for(int r = 1; r < height - 1; r++){
        for(int c = 1; c < weight - 1; c++){
            if(r == playerPtr -> getY(), c == playerPtr -> getX()){
                cout << "@" << " ";
                break;
            }
            cout << grid[r][c] << " "; 
        }
        cout << endl;
    }
}
bool isWall(int x, int y){
    if((x > width || x < 0 )||(y > height ||))
}
int getWidth const();
int getHeight const();
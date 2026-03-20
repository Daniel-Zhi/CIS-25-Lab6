#include "Map.h"
#include <iostream>

using namespace std;


Map::Map(int width, int height, Player* player): width(width), height(height), playerPtr(player){
    if(player->getX() == 0){
        player->setX(1);
    }// I want to let the user be able to play it as a sandbox game and give them permition to modify thier initial position
    if(player->getY() == 0){
        player->setY(1);
    }// I want to let the user be able to play it as a sandbox game and give them permition to modify thier initial position
    grid = new char* [height];
    for(int r = 0; r < height; r++){
        grid[r] = new char[width]; 
    }
    for(int r = 0; r < height; r++){
        for(int c = 0; c < width ; c++){
            grid[r][c] = '#';
        }
    } //used for broader '#'s
    for(int r = 1; r < height - 1; r++){
        for(int c = 1; c < width - 1; c++){
            grid[r][c] = '.';
        }
    } //used for inner cells
}

Map::~Map(){
    for(int i = 0; i < height; i++){
        delete grid[i];
    }
    delete grid;
    cout << "Map is destroyed!";
}

void Map::draw() const{
    for(int r = 0; r < height; r++){
        for(int c = 0; c < width; c++){
            if(r == playerPtr -> getY() && c == playerPtr -> getX()){
                cout << "@" << " ";
            }
            else{
                cout << grid[r][c] << " "; 
            }
        }
        cout << endl;
    }
}
bool Map::isWall(int x, int y){
    if((x > width || x < 0 )||(y > height ||y < 0)){
        return true;
    }
    else if(grid[y][x] == '#'){
        return true;
    }
    else{
        return false;
    }
}
int Map::getWidth()const{
    return width;
}
int Map::getHeight()const{
    return height;
}
#include "Game.h"

int Game::worldcount = 0;

Game::Game():player(), gameMap(30, 15, &player), running(true){
    worldcount++;
    player.addItem(Item("Sword", 10));
    player.addItem(Item("Shield", 5));
    cout << "\n\n\n\n\n\n\n" <<endl;
    cout << "Welcome to the world:\n" << endl;
} 

Game::Game(int capasity, string name, int health, int attackPower, int x, int y, int width, int height):player(capasity, name, health, attackPower, x, y), gameMap(width, height, &player), running(true){
    worldcount++;
    player.addItem(Item("Sword", 10));
    player.addItem(Item("Shield", 5));
    cout << "\n\n\n\n\n\n\n" <<endl;
    cout << "Welcome to the world:\n" << endl;
} 

void Game::run(){
    while(running){
        cout << setfill('-') << setw(gameMap.getWidth() + 1) << right <<"World " << setfill('-') << setw(gameMap.getWidth() - 2) << left << worldcount << endl;
        gameMap.draw();
        player.displayStatus();
        player.showInventory();
        processInput();
    }
}

void Game::processInput(){
    int newX = player.getX();
    int newY = player.getY();
    char move;
    cin >> move;
    while(toupper(move) != 'W' && toupper(move) != 'S' && toupper(move) != 'D' && toupper(move) != 'A' && toupper(move) != 'Q'){
        cout << "Invalid value, try again!";
        cin >> move;
    }
    switch (toupper(move)){
        case 'W': 
            newY -= 1;
            if(!gameMap.isWall(newX, newY)){
                player.setX(newX);
                player.setY(newY);
                break;
            }
            newY += 1;
            break;
        case 'S':
            newY += 1;
            if(!gameMap.isWall(newX, newY)){
                player.setX(newX);
                player.setY(newY);
                break;
            }
            newY -= 1;
            break;
        case 'A':
            newX -= 1;
            if(!gameMap.isWall(newX, newY)){
                player.setX(newX);
                player.setY(newY);
                break;
            }
            newX += 1;
            break;
        case 'D':
            newX += 1;
            if(!gameMap.isWall(newX, newY)){
                player.setX(newX);
                player.setY(newY);
                break;
            }
            newX -= 1;
            break;
        case 'Q':
            running = false;
            break;
    }


}

Game::~Game(){
    cout << "Game is destroyed!" <<endl;
}

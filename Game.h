#ifndef GAME_H
#define GAME_H

#include "Map.h"

using namespace std;

class Game{
    private:
    Player player;
    Map gameMap;
    bool running;
    static int worldcount;
    void processInput();

    public:
    Game();
    Game(int capasity, string name, int health, int attackPower, int x, int y, int width, int height);
    void run();
    ~Game();
};

#endif
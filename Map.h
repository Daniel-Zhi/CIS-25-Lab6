class Map{
    private:
    char** grid;
    int width;
    int height;
    Player* playerPtr;

    public:
    Map(int width, int height, Player* player);
    ~Map();
    void draw() const;
    bool isWall(int x, int y);
    int getWidth const();
    int getHeight const();
    

};

#pragma
#include "gameoption.h"
class Game 
{
private:
    static Game* game;
    GameOption options;
public:
    static Game* getGame();
    GameOption getOptions();

protected:
    Game();
};
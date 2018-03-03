#pragma
#include "gameoption.h"
class Game 
{
private:
    static Game* game;
    GameOption m_gameOption;
public:
    static Game* getGame();
    void setOptions(GameOption gameOption);

protected:
    Game();
};
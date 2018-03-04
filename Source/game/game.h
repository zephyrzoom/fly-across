#pragma once
#include "gameoption.h"
class Game 
{
private:
    static Game* game;
    GameOption m_gameOption;
public:
    static Game* getGame();
    void setOption(GameOption gameOption);
    bool init();

protected:
    Game();
};
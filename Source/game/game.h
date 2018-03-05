#pragma once

#include "gameoption.h"
#include "rescache.h"

#include <string>
#include <map>

class Game 
{

private:
    static Game* game;
    GameOption m_gameOption;
    ResCache* m_resCache;
    std::map<std::string, std::string> m_textString;

public:
    static Game* getGame();
    void setOption(GameOption gameOption);
    bool init();

protected:
    Game();
};
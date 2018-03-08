#pragma once

#include "gameoption.h"
#include "rescache.h"
#include "eventmanager.h"

#include <string>
#include <map>

class Game 
{

private:
    GameOption* m_pGameOption;
    ResCache* m_pResCache;
    std::map<std::string, std::string> m_textString;
    

public:
    void setOption(GameOption* gameOption);
    bool init();
    bool createWindow(std::string gameTitle);
    virtual std::string vGetGameTitle()=0;
    virtual std::string vGetGameDirectory()=0;

    
    EventManager* m_pEventManager;
    GameLogicAndView* m_pGameView;

};
#pragma once

#include "../game/game.h"
#include "../game/gamelogic.h"

#include <string>

class FlyAcross : public Game {
private:    
    static FlyAcross* flyAcross;

public:
    static FlyAcross* getFlyAcross();
    std::string vGetGameDirectory();
    std::string vGetGameTitle();
    GameLogic* vGetGameLogic();

protected:
    FlyAcross();
};
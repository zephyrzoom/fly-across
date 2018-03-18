#pragma once

#include "../game/game.h"
#include "../gamelogic/gamelogic.h"

#include <string>

class FlyAcross : public Game {
private:
    // 游戏的单例
    static FlyAcross* flyAcross;

public:
    // 用于获得实例
    static FlyAcross* getFlyAcross();
    // 获取游戏的存档目录
    std::string vGetGameDirectory();
    // 获取游戏标题
    std::string vGetGameTitle();
    // 获取游戏逻辑
    GameLogic* vGetGameLogic();

protected:
    // 声明为protected是为了封锁创建实例的入口
    FlyAcross();
};
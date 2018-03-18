#pragma once

#include "vector2d.h"
#include <string>

class GameOption {
private:
    // 屏幕分辨率
    Vector2D screenSize;
public:
    // 通过配置文件设置游戏配置
    GameOption(const std::string optionfile);
};
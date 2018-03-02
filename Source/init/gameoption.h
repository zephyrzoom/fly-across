#pragma

#include "vector2d.h"
#include <string>

class GameOption {
private:
    Vector2D screenSize;
public:
    GameOption(const std::string optionfile);
};
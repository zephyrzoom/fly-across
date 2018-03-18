#include "flyacross.h"
#include "../gamelogic/gamelogic.h"

FlyAcross* FlyAcross::flyAcross = nullptr;

std::string FlyAcross::vGetGameTitle() {
    return "fly across";
}

std::string FlyAcross::vGetGameDirectory() {
    return "";
}

FlyAcross* FlyAcross::getFlyAcross() {
    if (flyAcross == nullptr) {
        flyAcross = new FlyAcross();
    }
    return flyAcross;
}

GameLogic* FlyAcross::vGetGameLogic() {
    return nullptr;
}

FlyAcross::FlyAcross() {
    
}
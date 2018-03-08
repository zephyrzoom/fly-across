#include "flyacross.h"

std::string FlyAcross::vGetGameTitle() {
    return "fly across";
}

std::string FlyAcross::vGetGameDirectory() {
    return "";
}

FlyAcross* FlyAcross::flyAcross = nullptr;

FlyAcross* FlyAcross::getFlyAcross() {
    if (flyAcross == nullptr) {
        flyAcross = new FlyAcross();
    }
    return flyAcross;
}
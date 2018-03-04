#include "game.h"
#include "initializer.h"

Game* Game::game = nullptr;
Game* Game::getGame() {
    if (game == nullptr) {
        game = new Game();
    }
    return game;
}

void Game::setOption(GameOption gameOption) {
    m_gameOption = gameOption;
}

bool Game::init() {
    
    if (!Initializer::isOnlyInstance()) {
        return false;
    }

    if (!Initializer::checkStorage()) {
        return false;
    }

    if (!Initializer::checkMemory()) {
        return false;
    }

    if (!Initializer::checkCPU()) {
        return false;
    }

    return true;
}
#include "game.h"
Game* Game::game = nullptr;
Game* Game::getGame() {
    if (game == nullptr) {
        game = new Game();
    }
    return game;
}

void Game::setOptions(GameOption gameOption) {
    m_gameOption = gameOption;
}
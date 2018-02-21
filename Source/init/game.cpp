#include "game.h"
Game* Game::game = nullptr;
Game* Game::getGame() {
    if (game == nullptr) {
        game = new Game();
    }
    return game;
}

GameOption Game::getOptions() {
    return options;
}
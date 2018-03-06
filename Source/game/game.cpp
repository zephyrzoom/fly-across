#include "game.h"
#include "initializer.h"
#include "luamanager.h"
#include "eventmanager.h"

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

    m_pResCache = new ResCache();

    if (!Initializer::loadResCache("Assets.zip", m_pResCache)) {
        return false;
    }

    if (!Initializer::loadString("Chinese", m_textString)) {
        return false;
    }

    if (!LuaManager::create()) {
        return false;
    }

    m_pEventManager = new EventManager();

    if (!m_pEventManager) {
        return false;
    }

    if (!createWindow()) {
        return false;
    }

    return true;
}

bool Game::createWindow() {
    return true;
}
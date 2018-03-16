#include "game.h"
#include "../init/initializer.h"
#include "../init/luamanager.h"
#include "../init/eventmanager.h"

void Game::setOption(GameOption* gameOption) {
    m_pGameOption = gameOption;
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

    if (!createWindow(vGetGameTitle())) {
        return false;
    }

    m_pGameLogic = vGetGameLogic();
    if (!m_pGameLogic) {
        return false;
    }

    m_saveDirectory = Initializer::getSaveDirectory();
    if (m_saveDirectory.empty()) {
        return false;
    }

    m_pResCache->preload("*.ogg");

    return true;
}

bool Game::createWindow(std::string gameTitle) {
    return true;
}

int Game::exitGame() {
    // 正常退出
    return 0;
}
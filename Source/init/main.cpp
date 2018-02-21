#include "logger.h"
#include "game.h"
int main()
{
    Logger::init("logging.json");
    
    Game::getGame()->getOptions().init("PlayerOptions.xml");

    if (!Game::getGame()->InitInstance(Game::getGame()->m_Options.m_ScreenSize.x, Game::getGame()->m_Options.m_ScreenSize.y))
    {
        return false;
    }

    MainLoop();
    Shutdown();
    Logger::Destroy();

    return Game::getGame()->GetExitCode();
}

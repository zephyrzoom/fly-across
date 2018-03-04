#include "logger.h"
#include "game.h"
#include "gameoption.h"

int main()
{
    Logger::init("logging.json");

    Game::getGame()->setOption(new GameOption("PlayerOption.xml"));

    if (!Game::getGame()->init())
    {
        return false;
    }

    MainLoop();
    Shutdown();
    Logger::Destroy();

    return Game::getGame()->GetExitCode();
}

#include "logger.h"
#include "game.h"
int main()
{
    Logger::init("logging.json");
    
    Game::getGame()->m_Options.Init("PlayerOptions.xml");

    if (!g_pApp->InitInstance(g_pApp->m_Options.m_ScreenSize.x, g_pApp->m_Options.m_ScreenSize.y))
    {
        return false;
    }

    MainLoop();
    Shutdown();
    Logger::Destroy();

    return g_pApp->GetExitCode();
}

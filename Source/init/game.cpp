int main()
{
    Logger::Init("logging.xml");
    g_pApp->m_Options.Init("PlayerOptions.xml");

    if (!g_pApp->InitInstance(g_pApp->m_Options.m_ScreenSize.x, g_pApp->m_Options.m_ScreenSize.y))
    {
        return false;
    }

    MainLoop();
    Shutdown();
    Logger::Destroy();

    return g_pApp->GetExitCode();
}

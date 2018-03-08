#include "logger.h"
#include "gameoption.h"
#include "flyacross.h"

int main()
{
    Logger::init("logging.json");

    FlyAcross::getFlyAcross()->setOption(new GameOption("PlayerOption.xml"));

    if (!FlyAcross::getFlyAcross()->init())
    {
        return false;
    }

    MainLoop();
    Shutdown();
    Logger::Destroy();

    return FlyAcross::getFlyAcross()->GetExitCode();
}

#include "../debugging/logger.h"
#include "../game/gameoption.h"
#include "flyacross.h"

/**
 * 程序入口
 */
int main()
{
    Logger::init("logging.json");

    FlyAcross::getFlyAcross()->setOption(new GameOption("PlayerOption.xml"));

    if (!FlyAcross::getFlyAcross()->init())
    {
        return 1;
    }

    //MainLoop();
    //Shutdown();
    Logger::destroy();

    return FlyAcross::getFlyAcross()->exitGame();
}

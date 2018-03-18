#pragma once

#include "../init/gameoption.h"
#include "../init/rescache.h"
#include "../init/eventmanager.h"
#include "gamelogic.h"

#include <string>
#include <map>

class Game 
{

private:
    // 保存游戏设置
    GameOption* m_pGameOption;
    // 缓存的资源
    ResCache* m_pResCache;
    // 用于显示的所有字符串
    std::map<std::string, std::string> m_textString;
    

public:
    // 设置游戏设置
    void setOption(GameOption* gameOption);
    // 初始化游戏，其中在一系列初始化操作
    bool init();
    // 创建游戏主窗口
    bool createWindow(std::string gameTitle);
    // 游戏名，定义为纯虚函数，继承类实现后才能使用
    virtual std::string vGetGameTitle()=0;
    // 游戏的目录，纯虚函数
    virtual std::string vGetGameDirectory()=0;
    // 游戏逻辑
    virtual GameLogic* vGetGameLogic()=0;
    // 退出游戏
    int exitGame();

    // 事件管理器
    EventManager* m_pEventManager;
    // 游戏逻辑
    GameLogic* m_pGameLogic;
    // 存档目录
    std::string m_saveDirectory;

};
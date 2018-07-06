#pragma once
#include <string>

class Logger
{
private:
    // 日志格式
    std::string m_format;
    // 日志输出文件路径，有路径则输出在文件，没有则不输出
    static const std::string M_PATH;
    // 日志是否输出在终端
    bool m_console;
    // 日志单例模式
    static Logger *logger;
    // 日志配置文件
    static const std::string M_CONF;

public:
    // 打印日志
    void log();
    static Logger* getLogger();

protected:
    // 声明为protected是为了封锁创建实例的入口
    Logger();
};
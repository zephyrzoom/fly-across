#pragma once
#include <string>

class Logger
{
private:
    // 日志格式
    std::string m_format;
    // 日志输出文件路径，有路径则输出在文件，没有则不输出
    std::string m_path;
    // 日志是否输出在终端
    bool m_console;
    

public:
    // 初始化日志
    static void init(const std::string logFile);
    // 销毁日志
    static void destroy();
    // 打印日志
    static void log();
};
#pragma once
#include <string>

class Logger
{
public:
    // 初始化日志
    static void init(const std::string logFile);
    // 销毁日志
    static void destroy();
};
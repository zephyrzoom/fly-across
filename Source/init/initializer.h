#pragma once

#include <string>
#include <map>

#include "rescache.h"

class Initializer {
public:
    // 判断游戏是否只有一个实例
    static bool isOnlyInstance();
    // 检查磁盘空间
    static bool checkStorage();
    // 检查内存大小
    static bool checkMemory();
    // 检查CPU速度
    static bool checkCPU();
    // 从压缩文件载入缓存资源
    static bool loadResCache(const std::string zipFile, ResCache* resCache);
    // 加载用于显示的字符串
    static bool loadString(const std::string language, std::map<std::string, std::string> textString);
    // 获取存档路径
    static std::string getSaveDirectory();
};
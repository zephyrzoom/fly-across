#include "initializer.h"
#include "rescache.h"

#include <string>

// 单实例检测
bool Initializer::isOnlyInstance() {
    return true;
}

// 检查用于存档或临时文件的硬盘空间是否足够
bool Initializer::checkStorage() {
    return true;
}

// 检查内存剩余空间
bool Initializer::checkMemory() {
    return true;
}

// 检查CPU速度是否满足要求
bool Initializer::checkCPU() {
    return true;
}

// 载入资源文件
bool Initializer::loadResCache(const std::string zipFile, ResCache* resCache) {
    return true;
}

// 加载文本
bool Initializer::loadString(const std::string language) {
    return true;
}
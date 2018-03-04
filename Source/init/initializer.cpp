#include "initializer.h"

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
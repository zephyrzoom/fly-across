#pragma once

#include <string>

class Initializer {
public:
    static bool isOnlyInstance();
    static bool checkStorage();
    static bool checkMemory();
    static bool checkCPU();
    static bool loadResCache(const std::string zipFile, ResCache* resCache);
    static bool loadString(const std::string language);
};
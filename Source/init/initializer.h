#pragma once

#include <string>
#include <map>

class Initializer {
public:
    static bool isOnlyInstance();
    static bool checkStorage();
    static bool checkMemory();
    static bool checkCPU();
    static bool loadResCache(const std::string zipFile, ResCache* resCache);
    static bool loadString(const std::string language, std::map<std::string, std::string> textString);
    static std::string getSaveDirectory();
};
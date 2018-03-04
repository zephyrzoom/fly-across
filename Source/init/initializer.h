#pragma once

class Initializer {
public:
    static bool isOnlyInstance();
    static bool checkStorage();
    static bool checkMemory();
    static bool checkCPU();
};
#pragma once

#include <string>

class ResCache {
public:
    // 根据文件类型预加载资源
    void preload(std::string fileType);
};
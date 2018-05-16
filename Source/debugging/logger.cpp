#include "logger.h"
#include "../third/json.hpp"

#include <fstream>

using Json = nlohmann::json;

/**
 * 日志初始化 
 */
void Logger::init(const std::string logFile) {
    // t:)表示时间
    // l:)表示错误等级
    // m:)表示信息
    std::ifstream iLogConf(logFile);
    Json jLogConf;
    if (!iLogConf) {
        // 载入日志配置文件失败
    }
    iLogConf >> jLogConf;
    m_format = jLogConf["format"];
    m_path = jLogConf["file"]["path"];
}

void Logger::destroy() {

}
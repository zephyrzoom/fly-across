#include "logger.h"
#include "../third/json.hpp"

#include <fstream>

using Json = nlohmann::json;

Logger* Logger::logger = nullptr;
/**
 * 日志初始化 
 */
Logger* Logger::getLogger() {
    if (logger == nullptr) {
        // t:)表示时间
        // l:)表示错误等级
        // m:)表示信息
        std::ifstream iLogConf(m_path);
        Json jLogConf;
        if (!iLogConf) {
            // 载入日志配置文件失败
        }
        iLogConf >> jLogConf;
        this->m_format = jLogConf["format"];
        m_path = jLogConf["file"]["path"];
    }
}

void Logger::destroy() {

}
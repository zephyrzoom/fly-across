#include "logger.h"
#include "../third/json.hpp"

#include <fstream>
#include <string>

using Json = nlohmann::json;

Logger* Logger::logger = nullptr;
const std::string M_CONF = "logging.json";
/**
 * 日志初始化 
 */
Logger* Logger::getLogger() {
    if (logger == nullptr) {
        // t:)表示时间
        // l:)表示错误等级
        // m:)表示信息
        std::ifstream iLogConf(M_CONF);
        Json jLogConf;
        if (!iLogConf) {
            // 载入日志配置文件失败
        }
        iLogConf >> jLogConf;
        m_format = jLogConf["format"];
        m_path = jLogConf["file"]["path"];
        
    }
}
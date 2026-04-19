#pragma once

enum LogLevel {
    AF_LOG_INFO,
    AF_LOG_WARN,
    AF_LOG_ERROR,
    AF_LOG_DEBUG

};

void af_log(LogLevel level, const char* format, ...);
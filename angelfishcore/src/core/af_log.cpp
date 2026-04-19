// this is a simple logger that can be called to print in the debug console using a line of code an example are "af_log(AF_LOG_INFO, "window closed with exit code 1");"
#include "af_log.h"
#include <stdio.h>
#include <stdarg.h>

void af_log(LogLevel level, const char* format, ...)
{
    const char* levelStr = "";

    switch (level)
    {
        case AF_LOG_INFO:  levelStr = "INFO"; break;
        case AF_LOG_WARN:  levelStr = "WARN"; break;
        case AF_LOG_ERROR: levelStr = "ERROR"; break;
        case AF_LOG_DEBUG: levelStr = "DEBUG"; break;
    }

    printf("[Angelfish][%s] ", levelStr);

    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);

    printf("\n");
}
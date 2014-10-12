#include "utils.hpp"

void utils::error_callback(int error, const char* description)
{
    fputs(description, stderr);
}


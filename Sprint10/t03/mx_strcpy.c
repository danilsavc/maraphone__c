#include "file_to_str.h"
char *mx_strcpy(char *dst, const char *src) {
    while (*src != '\0') {
        *dst = *src;
        src++;
        dst++;
    }
    return dst;
}


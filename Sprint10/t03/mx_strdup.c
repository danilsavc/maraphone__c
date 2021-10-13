#include "file_to_str.h"

char *mx_strdup(const char *str) {
    int n = mx_strlen(str);
    char *s = mx_strnew(n);;
    mx_strcpy(s, str);
    return s;
}


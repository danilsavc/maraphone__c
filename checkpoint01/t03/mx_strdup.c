char *mx_strcpy(char *dst, const char *src) {
    while (*src != '\0') {
        *dst = *src;
        src++;
        dst++;
    }
    return dst;
}

int mx_strlen(const char *s) {
    int charlen = 0;
    for (; *s; s++ && charlen++) {
    }
    return charlen;
}

#include <stdlib.h> 
char *mx_strnew(const int size) {
    if (size <= 0) {
        return NULL;
    }
    char *buffer = (char*) malloc(size + 1);
    for (int i  = 0; i < size; i ++) {
        buffer[i] = '\0';
    }
    return buffer;
}

char *mx_strdup(const char *str) {
    int n = mx_strlen(str);
    char *s = mx_strnew(n);;
    mx_strcpy(s, str);
    return s;
}


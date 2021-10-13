char *mx_strncpy(char *dst, const char *src, int len) {
    int i;
    char *temp;
    temp = dst;
    for (i = 0; i < len; i++) {
        *dst++ = *src++;
    }
    return temp;
}


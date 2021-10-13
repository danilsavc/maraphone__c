char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    int n = mx_strlen(str);
    char *s = mx_strnew(n);;
    mx_strcpy(s, str);
    return s;
}


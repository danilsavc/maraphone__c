char *mx_strcat(char *s1, const char *s2);
char *mx_strncpy(char *dst, const char *src);
void mx_strdel(char **str);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_concat_words(char **words) {
    if (!words) {
        return 0;
    }
    char *ss = 0;
    while (*words != 0) {
        ss = mx_strjoin(ss, *words++);
        if (*words != 0) {
            ss = mx_strjoin(ss, " ");
        }
    } 
    return ss;
}


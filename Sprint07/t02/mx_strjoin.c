char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strjoin(char const *s1, char const *s2) {
    char *s3;
    if (!s1 && !s2) {
        return 0;
    }
    if (!s1) {
        return(mx_strdup(s2));
    }
    if (!s2) {
        return(mx_strdup(s1));
    }
    if (!(s3 = mx_strnew(mx_strlen(s1) + mx_strlen(s2)))) {
        return 0;
    }

    s3 = mx_strdup(s1);
    mx_strcat(s3, s2);

    return s3;
}


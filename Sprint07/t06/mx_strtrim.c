#include <stdbool.h>
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_strlen(const char *s);
void mx_strdel(char **str);
bool mx_isspace(char c);

char *mx_strtrim(const char *str) {
    if(!str) {
        return NULL;
    }
    int size = mx_strlen(str);
    int start = 0;
    int end = 0;
    char *str1 = mx_strnew(size);
    str1 = mx_strncpy(str1, str, size);
    for (; start < size; start++) {
        if (!mx_isspace(str[start])) {
            break;
        }
    }
    for (int i = size - 1; i > 0;  i--) {
        if (!mx_isspace(str[i])) {
            break;
        }
    }
    char *str2 = mx_strnew(size - start - end);
    int j = 0;
    for (int i = start; i < size - end; i++){
        str2[j++] = str1[i];
    }
    mx_strdel(&str1);
    return str2;
   
}


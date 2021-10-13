#include <unistd.h>
int mx_strlen(const char *s) 
{
    int j = 0;
    char i = s[0];
    while(i != '\0') {
        j++;
        i = s[j];
    }
    return j;
}

void mx_printerr(const char*s) {
    write(2, s, mx_strlen(s));
}


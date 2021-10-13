#include "../inc/header.h"

bool mx_isdigit(int);
bool mx_isspace(char);
int mx_atoi(const char *str) {
    int num = 0;
    int negative =1;
    if (*str == '-') {
        negative = -1;
        str++;
    }
    while (*str != '\0') {
        if (mx_isspace(*str)) {
            break;
        }
        if (*str == '-') {
            break;
        }
        num *= 10;
        num += *str++;
        num -= '0';
    }
    return (negative * num);
}


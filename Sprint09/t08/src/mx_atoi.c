#include "../inc/calculator.h"

int mx_atoi(const char *str) {
    int i = 0;
    long int res = 0;
    int negative = 1;
    while (str[i]) {
        if (mx_isspace(str[i])) {
            i++;
        }
        else {
            break;
        }
    }
    if (str[i] == '-') {
        negative = -1;
        i++;
    }
    if (str[i] == '+') {
        i++;
    }
    while (str[i]) {
        if (!mx_isdigit(str[i])) {
            return 0;
        }
        res = res * 10;
        res = res + (str[i] - 48);
        i++;
    }
    if(res >= 2147483647)
        return 0;
    return (negative * res);
}


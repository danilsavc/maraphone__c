#include "../inc/header.h"
void mx_printchar(char s);

void mx_printint(int n) {
    int s_n = n;
    int f_n = 0;
    int i = 0;
    while (n != 0) {
        f_n = n %10;
        n -= f_n;
        n = n / 10;
        i++;
    }
    n = s_n;
    int array[i];
    int counter = 0;
    while (n!= 0) {
        f_n = n % 10;
        n -= f_n;
        n = n/ 10;
        array[counter] = f_n;
        counter++;
    }
    for (int j = counter - 1; j >= 0; j--) {
        mx_printchar(array[j] + 48);
    }
}


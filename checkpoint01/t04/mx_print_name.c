void mx_printint(int n);

#include <unistd.h>
void mx_printchar(char c) {
    char* chch = &c;
    write (1, chch, 1);
}

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



int mx_strlen(const char *s) {
    int charlen = 0;
    for (; *s; s++ && charlen++) {
    }
    return charlen;
}

void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}



int main(int argc, char *argv[]) {
    mx_printstr(argv[0]);
    mx_printchar('\n');
    mx_printint(argc);
    mx_printchar('\n');
    return 0;
}


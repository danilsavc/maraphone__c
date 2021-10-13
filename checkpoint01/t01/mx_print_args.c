#include <unistd.h>
void mx_printchar(char c) {
    char* chch = &c;
    write (1, chch, 1);
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
    if (argc > 1) {
        for (int i = 1; i < argc; i ++) {
            mx_printstr(argv[i]);
            mx_printchar('\n');
        }
    }
    return 0;
}


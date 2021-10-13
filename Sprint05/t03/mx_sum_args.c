#include <stdbool.h>
int mx_atoi(char *str);
bool mx_isdigit(int c);
void mx_printchar(char c);
bool mx_isspace(char c);
void mx_printint(int n);


int main(int argc, char *argv[]) {
    if (argc < 2) {
        return 0;
    }
    int sum = 0;
    for (int i = 1; i < argc; i++) {
        sum += mx_atoi(argv[i]);
    }
    mx_printint(sum);
    mx_printchar('\n');
}


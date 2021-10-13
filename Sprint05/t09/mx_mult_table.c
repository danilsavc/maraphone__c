#include <stdbool.h>
int mx_atoi(char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);

int main (int argc, char *argv[]) {
    if (argc == 3) {
        int tempNum1 = mx_atoi(argv[1]);
        int tempNum2 = mx_atoi(argv[2]);
        if (tempNum1 < 1|| tempNum2 < 1) {
            return 0;
        }
        if (argv[1] > 0 && argv[2] > 0) {
            if (tempNum1 > tempNum2) {
                int temp = tempNum1;
                tempNum1 = tempNum2;
                tempNum2 = temp;
            }
            for (int i = tempNum1; i <= tempNum2; i++) {
                for (int j = tempNum1; j <= tempNum2; j++) {
                    mx_printint(i * j);
                    if (j != tempNum2) {
                        mx_printchar('\t');
                    }
                    
                }
                mx_printchar('\n');
            }
        }
    }
    else {
        return 0;
    }
}


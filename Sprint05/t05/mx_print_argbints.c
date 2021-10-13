void mx_printint(int n);
void mx_printchar(char c);
int mx_atoi(char *str);

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        int ss = mx_atoi(argv[i]);
        for (int j = 31; j >=0; j--) {
            int n = ss >> j;
            if (n & 1) {
                mx_printint(1);
            }
            else {
                mx_printint(0);
            }
        }
        mx_printchar('\n');
    }
    return 0;
}


void mx_printchar(char c);
void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    int temp = argc;
    temp++;
    mx_printstr(mx_strchr(argv[0], '/') + 1);
    mx_printchar('\n');
    return 0;
}


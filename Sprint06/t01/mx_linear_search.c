int mx_strcmp(const char *s1, const char *s2);

int mx_linear_search(char **arr, const char *s) {
    if ( arr == 0 || s == 0) {
        return -1;
    }
    for (int i = 0; arr[i] != 0; i++) {
        if(!mx_strcmp(arr[i], s)) {
            return i;
        }
    }
    return 0;
}


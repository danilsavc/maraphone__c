int mx_factorial_rec(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    if (n > 0 && n < 13) {
        int rec = n;
        rec = rec * mx_factorial_rec(n - 1);
        return rec;
    }
    else {
        return 0;
    }
}


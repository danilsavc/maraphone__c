int mx_gcd(int a, int b) {
    if (a == b) {
        return a;
    }
    if (a < 0) {
        a = -a;
    }
    if (b < 0) {
        b = -b;
    }
    if (b != 0) {
        return mx_gcd(b, a % b);
    }
    else {
        return a;
    }
}


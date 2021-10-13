int mx_gcd(int a, int b);

int mx_lcm(int a, int b) {
    if (a < 0) {
        a = -a;
    }
    if (b < 0) {
        b = -b;
    }
    if (a == 0 || b == 0) {
        return 0;
    } 
    int res = (a * b) / mx_gcd(a, b);
    return res;
}


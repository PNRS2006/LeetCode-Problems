long long divide(long long a, long long b) {
    long long c = a/b;
    long long d = pow(2,31)-1;
    long long e = pow(-2,31);
    if(c>d) return d;
    else if(c<e) return e;
    return c;
}
int maxContainers(int n, int w, int m) {
    int a = m/w;
    int b = n*n;
    if(a<=b) return a;
    return b;
}
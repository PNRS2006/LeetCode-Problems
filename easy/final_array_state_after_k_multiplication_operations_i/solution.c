int min_index(int* a, int n) {
    if (n <= 0) return -1;
    int min = a[0], c = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            c = i;
        }
    }
    return c;
}

int* getFinalState(int* a, int n, int k, int m, int* r) {
    if (n == 0) {
        *r = 0;
        return NULL;
    }
    
    int* b = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        b[i] = a[i];
    }
    
    while (k > 0) {
        int idx = min_index(b, n);
        if (idx == -1) break;
        b[idx] = b[idx] * m;
        k--;
    }
    
    *r = n;
    return b;
}

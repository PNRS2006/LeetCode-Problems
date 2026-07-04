int dominantIndex(int* a, int n) {
    int max = a[0], b = 0, c = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            b = i;
        }
    }
    for (int i = 0; i < n; i++) {
        if (i != b && a[i] * 2 > max) {
            return -1;
        }
    }
    return b;
}

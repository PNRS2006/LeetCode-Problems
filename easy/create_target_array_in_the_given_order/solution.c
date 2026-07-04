/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* createTargetArray(int* a, int n, int* b, int m, int* r) {
    int* c = (int*)malloc(n * sizeof(int));
    int d = 0;
    for (int i = 0; i < n; i++) {
        for (int j = d; j > b[i]; j--) {
            c[j] = c[j - 1];
        }
        c[b[i]] = a[i];
        d++;
    }

    *r = n;
    return c;
}
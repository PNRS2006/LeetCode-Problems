int* intersection(int* a, int n, int* b, int m, int* r) {
    int* c = (int*)malloc(n * sizeof(int));  // max possible size
    int k = 0;

    for (int i = 0; i < n; i++) {
        // check if a[i] is already in result
        bool alreadyAdded = false;
        for (int x = 0; x < k; x++) {
            if (c[x] == a[i]) {
                alreadyAdded = true;
                break;
            }
        }
        if (alreadyAdded) continue;

        // check if a[i] exists in b
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                c[k++] = a[i];
                break;
            }
        }
    }

    *r = k;
    return c;
}
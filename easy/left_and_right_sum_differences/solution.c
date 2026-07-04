#include <stdlib.h>
#include <math.h>

int* leftRightDifference(int* a, int n, int* r) {
    int* left = (int*)malloc(n * sizeof(int));
    int* right = (int*)malloc(n * sizeof(int));
    int* diff = (int*)malloc(n * sizeof(int));

    left[0] = 0;
    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] + a[i - 1];
    }

    right[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] + a[i + 1];
    }

    for (int i = 0; i < n; i++) {
        diff[i] = abs(left[i] - right[i]);
    }

    *r = n;
    free(left);
    free(right);
    return diff;
}

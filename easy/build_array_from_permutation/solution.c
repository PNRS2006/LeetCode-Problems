/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* a, int n, int* r) {
    int* b = (int*)malloc(n*sizeof(int));
    int k=0;
    for(int i=0;i<n;i++)
    {
        b[k++] = a[a[i]];
    }
    *r=k;
    return b;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* a, int n, int* r) {
    int* b = (int*)malloc(2*n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        b[i] = a[i];
        b[i+n] = a[i];
    }
    *r = 2*n;
    return b;
}
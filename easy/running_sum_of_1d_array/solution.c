/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* a, int n, int* r) {
    int* b = (int*)malloc(n*sizeof(int));
    int j=0,c=0;
    for(int i=0;i<n;i++)
    {
        c+=a[i];
        b[j++]=c;
    }
    *r=j;
    return b;
}
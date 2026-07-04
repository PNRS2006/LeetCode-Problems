/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* a, int n, int p, int* r) {
    int* b = (int*)malloc(n*sizeof(int));
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<p) b[j++]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==p) b[j++]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>p) b[j++]=a[i];
    }
    *r=j;
    return b;
}
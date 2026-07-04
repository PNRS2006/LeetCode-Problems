/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* a, int n, int* r) {
    int* b = (int*)malloc(n*sizeof(int));
    int k=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0) b[k++]=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0) b[k++]=a[i];
    }
    *r=k;
    return b;
}
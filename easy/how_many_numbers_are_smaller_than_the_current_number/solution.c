/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int ind(int* a,int n,int b)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<b) c++;
    }
    return c;
}
int* smallerNumbersThanCurrent(int* a, int n, int* r) {
    int* b = (int*)malloc(n*sizeof(int));
    int j=0;
    for(int i=0;i<n;i++)
    {
        b[j++]=ind(a,n,a[i]);
    }
    *r=j;
    return b;
}
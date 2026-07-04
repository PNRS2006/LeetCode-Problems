/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* a, int n, int* r) {
    int* b = (int*)malloc(n*sizeof(int));
    int* c = (int*)calloc(n,sizeof(int));
    int j=0;
    for(int i=0;i<n;i++)
    {
        c[a[i]-1]=1;
    }
    for(int i=0;i<n;i++)
    {
        if(c[i]==0)
        {
            b[j++] = i+1;
        }
    }
    *r = j;
    return b;
}
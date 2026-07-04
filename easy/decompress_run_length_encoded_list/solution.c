/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* a, int n, int* r) {
    int f=0;
    for (int i = 0; i < n; i += 2) 
    {
        f+= a[i];
    }
    int* b = (int*)malloc(f*sizeof(int));
    int j=0,c,d,e=0;
    for(int i=0;i<n-1;i=i+2)
    {
        c=a[i];
        d=a[i+1];
        for(int j=0;j<c;j++)
        {
            b[e++]=d;
        }
    }
    *r=e;
    return b;
}
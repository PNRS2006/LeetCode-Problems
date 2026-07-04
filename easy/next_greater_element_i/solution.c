/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* a, int n, int* b, int m, int* r) {
    int* c = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        int found=0;
        int j;
        for(j=0;j<m;j++)
        {
            if(b[j]==a[i])
            {
                found = 1;
                break;
            }
        }
        int f=-1;
        for(int k=j+1;k<m;k++)
        {
            if(b[k]>a[i])
            {
                f = b[k];
                break;
            }
        }
        c[i] = f;
    }
    *r = n;
    return c;
}
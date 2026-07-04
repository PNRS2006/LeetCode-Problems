/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* a, int n, int t, int* r) {
    int *b = (int*)malloc(2*sizeof(int));
    int c=0,i,j,k=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==t)
            {
                b[0] = i;
                b[1] = j;
                break;
            }
        }
    }
    *r = 2;
    return b;
}
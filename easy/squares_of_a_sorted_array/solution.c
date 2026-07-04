/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* a, int n, int* r) {
    int* b = (int*)malloc(n*sizeof(int));
    int l=0,ri=n-1;
    int k=n-1;
    while(l<=ri)
    {
        int ls = a[l]*a[l];
        int rs = a[ri]*a[ri];
        if(ls>rs)
        {
            b[k--] = ls;
            l++;
        }
        else
        {
            b[k--] = rs;
            ri--;
        }
    }
    *r = n;
    return b;
}
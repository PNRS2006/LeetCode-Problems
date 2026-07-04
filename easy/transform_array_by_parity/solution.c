/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void sort(int* a, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int* transformArray(int* a, int n, int* r) {
    int* b = (int*)malloc(n*sizeof(int));
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            b[k++] = 1;
        }
        else
        {
            b[k++] = 0;
        }
    }
    sort(b,n);
    *r = k;
    return b;
}
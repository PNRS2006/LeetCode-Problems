int countPairs(int* nums, int n, int t) {
    int *a = nums;
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((a[i]+a[j])<t && i<j)
            {
                c++;
            }
        }
    }
    return c;
}
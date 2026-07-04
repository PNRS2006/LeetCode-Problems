int countKDifference(int* nums, int n, int k) {
    int *a=nums;
    int b=0,i;
    for(i=0;i<n;i++)
    {
        int j=i;
        for(j=0;j<n;j++)
        {
            if(abs(a[i]-a[j]==k))
            {
                b++;
            }
        }
    }
    return b;
}
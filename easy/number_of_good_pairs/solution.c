int numIdenticalPairs(int* nums, int n) {
    int* a=nums;
    int i,b=0,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i<j)
            {
                b++;
            }
        }
    }
    return b;
}
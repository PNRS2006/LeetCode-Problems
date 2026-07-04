int countPairs(int* a, int n, int k) {
    int c=0,b;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                b=(i*j);
                if(b%k==0) c++;
            }
        }
    }
    return c;
}
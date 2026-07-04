int repeatedNTimes(int* a, int n) {
    int c;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j]) c=a[i];
        }
    }
    return c;
}
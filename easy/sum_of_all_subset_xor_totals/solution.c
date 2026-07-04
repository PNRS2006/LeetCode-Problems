int subsetXORSum(int* a, int n) {
    int c=0;
    for(int i=0;i<n;i++)
    {
        c|=a[i];
    }
    return c*(1<<(n-1));
}
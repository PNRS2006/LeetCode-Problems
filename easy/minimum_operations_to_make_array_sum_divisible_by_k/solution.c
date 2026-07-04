int minOperations(int* a, int n, int k) {
    int c=0;
    for(int i=0;i<n;i++)
    {
        c+=a[i];
    }
    if(c%k==0) return 0;
    return (c%k);
}
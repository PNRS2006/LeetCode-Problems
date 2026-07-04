int bits(int n)
{
    int c=0;
    while(n)
    {
        c+=(n&1);
        n>>=1;
    }
    return c;
}
int sumIndicesWithKSetBits(int* a, int n, int k) {
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(bits(i)==k) c+=a[i];
    }
    return c;
}
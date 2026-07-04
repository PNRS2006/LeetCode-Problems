int binary(int* a, int n, int t)
{
    int i,c;
    for(i=0;i<n;i++)
    {
        if(a[i]==t) return i;
    }
    return -1;
}
int search(int* a, int n, int t) {
    int b = binary(a,n,t);
    return b;
}
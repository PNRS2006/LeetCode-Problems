int found(int* a, int n, int o)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==o) return found(a,n,o*2);
    }
    return o;
}
int findFinalValue(int* a, int n, int o) {
    return found(a,n,o);
}
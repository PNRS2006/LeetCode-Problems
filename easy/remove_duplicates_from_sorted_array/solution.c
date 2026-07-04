int removeDuplicates(int* a, int n) {
    if(n==0) return 0;
    int i,j=1;
    for(i=1;i<n;i++)
    {
        if(a[i]!=a[j-1])
        {
            a[j++] = a[i];
        }
    }
    return j;
}
int sumOfUnique(int* a, int n) {
    int b[101] = {0};
    for(int i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(b[a[i]]==1) c+=a[i];
    }
    return c;
}
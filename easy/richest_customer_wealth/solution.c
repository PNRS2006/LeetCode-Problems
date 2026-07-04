int maximumWealth(int** a, int n, int* r) {
    int m=0;
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<r[i];j++)
        {
            c+=a[i][j];
        }
        if(c>m) m=c;
    }
    return m;
}
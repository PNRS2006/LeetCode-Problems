int pivotInteger(int n) {
    if(n==1) return 1;
    for(int i=0;i<n;i++)
    {
        int b=i;
        int c=0,d=0;
        for(int j=0;j<=b;j++)
        {
            c+=j;
        }
        for(int j=b;j<=n;j++)
        {
            d+=j;
        }
        if(c==d)
        {
            return i;
        }
    }
    return -1;
}
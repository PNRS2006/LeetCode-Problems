int findMiddleIndex(int* a, int n) {
    for(int i=0;i<n;i++)
    {
        int c=0,d=0;
        int b=i;
        for(int j=0;j<b;j++)
        {
            c+=a[j];
        }
        for(int j=b+1;j<n;j++)
        {
            d+=a[j];
        }
        if(c==d)
        {
            return i;
        }
    }
    return -1;
}
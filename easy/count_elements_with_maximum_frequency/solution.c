int maxFrequencyElements(int* a, int n) {
    int d=0;
    int b[101]={0};
    for(int i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    int c = b[a[0]];
    for(int i=0;i<n;i++)
    {
        if(b[a[i]]>c) c=b[a[i]];
    }
    for(int i=0;i<n;i++)
    {
        if(b[a[i]]==c) d++;
    }
    return d;
}
int findGCD(int* nums, int n) {
    int* a=nums;
    int i,b=0,c=a[0],d;
    for(i=0;i<n;i++)
    {
        if(a[i]>b) b=a[i];
        if(a[i]<c) c=a[i];
    }
    if(a!=b)
    {
        for(i=b*c;i>=1;i--)
        {
            if(b%i==0 && c%i==0)
            {
                d=i;
                break;
            }
        }
     return d;
    }
    else
     return 1;
}
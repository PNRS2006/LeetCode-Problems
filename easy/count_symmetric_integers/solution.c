int rev(int n)
{
    int a,b=0;
    while(n>0)
    {
        a=n%10;
        b=b*10+a;
        n/=10;
    }
    return b;
}
int countSymmetricIntegers(int low, int high) {
    int f=0;
    for(int i=low;i<=high;i++)
    {
        int n=i;
        int l=log10(n)+1;
        if(l%2!=0) continue;
        int m=l/2;
        int a = rev(n);
        int c=0,d=0;
        for(int j=0;j<m;j++)
        {
            c+=n%10;
            n/=10;
            d+=a%10;
            a/=10;
        }
        if(c==d)  f++;
    }
    return f;
}
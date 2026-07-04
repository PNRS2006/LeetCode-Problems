int sum(int n)
{
    int a,b=0;
    while(n>0)
    {
        a=n%10;
        b+=a;
        n/=10;
    }
    return b;
}
int differenceOfSum(int* a, int n) {
    int b=0,c=0;
    for(int i=0;i<n;i++)
    {
        b+=a[i];
        c+=sum(a[i]);
    }
    return abs(b-c);
}
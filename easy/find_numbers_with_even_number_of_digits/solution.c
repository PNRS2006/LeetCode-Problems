int digits(int n)
{
    int a=0,b;
    while(n>0)
    {
        b=n%10;
        a++;
        n/=10;
    }
    if(a%2==0) return 1;
    return -1;
}
int findNumbers(int* a, int n) {
    int b=0;
    for(int i=0;i<n;i++)
    {
        if(digits(a[i])==1) b++;
    }
    return b;
}
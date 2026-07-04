int sum(int n)
{
    int a=0,b;
    while(n>0)
    {
        b=n%10;
        a+=b;
        n/=10;
    }
    return a;
}
int sumOfTheDigitsOfHarshadNumber(int x) {
    int s = sum(x);
    if(x%s==0) return s;
    return -1;
}
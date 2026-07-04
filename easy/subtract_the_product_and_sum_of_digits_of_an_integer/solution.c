int subtractProductAndSum(int n) {
    int a=1,b=0,c;
    while(n>0)
    {
        c=n%10;
        b=b+c;
        a=a*c;
        n=n/10;
    }
    return a-b;
}
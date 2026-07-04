int totalMoney(int n) {
    int i,a=1,b=0,m=1;
    for(i=1;i<=n;i++)
    {
        b=b+a;
        a++;
        if(i%7==0)
        {
            m++;
            a=m;
        }
    }
    return b;
}
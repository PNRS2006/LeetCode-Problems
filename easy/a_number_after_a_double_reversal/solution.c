bool isSameAfterReversals(int num) {
    int a=num,b,c=0,d,e=0;
    while(a>0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    while(c>0)
    {
        d=c%10;
        e=e*10+d;
        c=c/10;
    }
    return e==num;
}
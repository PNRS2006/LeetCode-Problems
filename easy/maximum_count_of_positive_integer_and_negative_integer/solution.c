int fun(int n)
{
    if(n<0) return -1;
    else if(n==0) return 0;
    return 1;
}
int maximumCount(int* c, int n) {
    int a=0,b=0,i;
    for(i=0;i<n;i++)
    {
        if(fun(c[i])==1) a++;
        else if(fun(c[i])==-1)  b++;
    }
    if(a>b) return a;
    return b;
}
int countOperations(int a, int b) {
    if(a==0 || b==0) return 0;
    else if(a==b) return 1;
    long long c=0;
    while(a!=b)
    {
        if(a>b) a-=b;
        else b-=a;
        c++;
    }
    return c+1;
}
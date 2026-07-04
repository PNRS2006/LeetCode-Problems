

int numberOfMatches(int n){
    int b=0;
    while(n>1)
    {
        if(n%2==0)
        {
            b=b+n/2;
            n=n/2;
        }
        else
        {
            b=b+(n-1)/2;
            n=(n+1)/2;
        }
    }
    return b;
}
bool isThree(int n) {
    int i,a=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            a++;
        }
    }
    if(a==3)
     return true;
    return false;
}
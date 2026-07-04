int sumOfSquares(int* a, int n) {
    int i,b=0;
    for(i=0;i<n;i++)
    {
        if(n%(i+1)==0) b+=a[i]*a[i];
    }
    return b;
}
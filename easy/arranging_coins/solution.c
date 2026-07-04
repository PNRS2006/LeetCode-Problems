int arrangeCoins(int n) {
    int a = 0;
    while(n>=a+1)
    {
        a++;
        n-=a;
    }
    return a;
}
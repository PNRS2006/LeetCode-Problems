int minBitFlips(int s, int g) {
    int c=0;
    int x=s^g;
    while(x)
    {
        c+=x&1;
        x >>= 1;
    }
    return c;
}
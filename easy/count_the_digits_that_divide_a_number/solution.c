int countDigits(int num) {
    int b=0;
    int n=num;
    while(num>0)
    {
        int a=num%10;
        if(n%a==0)
        {
            b++;
        }
        num/=10;
    }
    return b;
}
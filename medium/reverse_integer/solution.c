int reverse(int x)
{
    int n=log10(x)+1;
     if(x<=pow(-2,31) || x>=(pow(2,31)-1)) return 0;
     else
    { 
       
        long long rev=0;
        long long b =x;
        x=abs(x);
        long long temp=x;
        long long  c=x;
        if(n>=10 && (x%10)>2) return 0;
        while(c>0)
        {
            int r=c%10;
            rev=rev*10+r;
            c/=10;
        }
        if(rev>INT_MAX) return 0;
        if(temp==b)
        {
            return rev;
        }
        else return -rev;
    }
}
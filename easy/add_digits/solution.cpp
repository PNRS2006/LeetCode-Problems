class Solution {
public:
    int addDigits(int num) {
        int n,sum=0,a,b=0,c,d=0;
        while(num!=0)
        {
            n=num%10;
            sum=sum+n;
            num=num/10;
        }
        if(sum>=10)
        {
            while(sum!=0)
            {
                int a=sum%10;
                b=b+a;
                sum=sum/10;
            }
            if(b>=10)
            {
                while(b!=0)
                {
                    int c=b%10;
                    d=d+c;
                    b=b/10;
                }
            return d;
        }
            else
              return b;
        }
        else
          return sum;
    }
};
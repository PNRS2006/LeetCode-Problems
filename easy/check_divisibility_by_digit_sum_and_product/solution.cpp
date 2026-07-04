class Solution {
public:
    bool checkDivisibility(int n) {
        int c=0,d=1,e=n;
        while(n>0)
            {
                int a=n%10;
                c+=a;
                d*=a;
                n/=10;
            }
        return e%(c+d)==0;
    }
};
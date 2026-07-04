class Solution {
public:
    bool checkGoodInteger(int n) {
        int n1=0 , m=1;
        while(n>0){
            int k = n%10;
            n1+=k;
            m+=(k*k);
            n/=10;
        }
        return (m-n1)>=50;
    }
};
class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int c=0;
        int m=max(1,n-k);
        for(int i=m;i<=n+k;i++){
            if(abs(n-i)<=k && (n&i)==0) c+=i;
        }
        return c;
    }
};
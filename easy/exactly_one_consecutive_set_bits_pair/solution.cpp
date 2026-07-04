class Solution {
public:
    bool consecutiveSetBits(int n) {
        int c=0;
        while(n){
            if((n&1)==1 && (n>>1&1)==1) c++;
            n=n>>1;
        }
        return c==1;
    }
};
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int c=0 , d=0;
        while(n){
            if((n&1)==0) c+=(1<<d);
            d++;
            n>>=1;
        }
        return c;
    }
};
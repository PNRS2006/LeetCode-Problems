class Solution {
public:
    int concatenatedBinary(int n) {
        int m=1e9+7;
        long long s=0;
        int l=0;
        for(int i=1;i<=n;i++){
            if((i&(i-1))==0) l++;
            s = ((s<<l)|i)%m ;
        }
        return s;
    }
};
class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        int l=1,r=x/2;
        int res=0;
        while(l<=r){
            long long mid = l+(r-l)/2;
            long long n = mid*mid;
            if(n==x) return mid;
            if(n<x) {
                res = mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return res;
    }
};
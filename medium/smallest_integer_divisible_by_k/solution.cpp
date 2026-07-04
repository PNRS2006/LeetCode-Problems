class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0 || k%5==0 || k==0) return -1;
        int r = 0;
        int n = k;
        int v = -1;

        while(n--){
            r = (r*10 + 1) % k;
            if(r == 0){
                v = k - n;
                break;
            }
        }
    return v;
    }
};
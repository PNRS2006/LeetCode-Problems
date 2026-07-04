class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        if(k==1) return r-l+1;
        int c=0;
        int i=1;
        if(l==0) i=0;
        for(i;pow(i,k)<=r;){
            long long m = pow(i,k);
            if(m>r) break;
            if(m>=l && m<=r) c++;
            i++;
        }
        return c;
    }
};
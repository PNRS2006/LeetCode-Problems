class Solution {
public:
    int maxSubArray(vector<int>& n) {
        int me=n[0];
        int r=n[0];
        for(int i=1;i<n.size();i++){
            me = max(n[i],me+n[i]);
            r = max(r,me);
        }
        return r;
    }
};
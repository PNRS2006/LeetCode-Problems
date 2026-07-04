class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& n) {
        vector<int>v(n.size());
        int k=n.size();
        for(int i=0;i<n.size();i++) {
            int l = ((n[i]+i)%k);
            if(l<0) l += k;
            v[i] = n[l];
        }
        return v;
    }
};
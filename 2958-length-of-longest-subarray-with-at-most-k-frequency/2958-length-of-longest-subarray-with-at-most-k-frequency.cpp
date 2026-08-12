class Solution {
public:
    int maxSubarrayLength(vector<int>& n, int k) {
        unordered_map<int,int>m;
        int l=0 , k1=0;
        for(int r=0;r<n.size();r++){
            while(m[n[r]]>=k){
                m[n[l]]--;
                l++;
            }
            m[n[r]]++;
            k1 = max(k1,r-l+1);
        }
        return k1;
    }
};
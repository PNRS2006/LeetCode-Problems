class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        unordered_map<int,int>m;
        for(int i=0;i<n.size();i++){
            int mi = t-n[i];
            if(m.count(mi)) return {m[mi],i};
            m[n[i]]=i;
        }
        return {};
    }
};
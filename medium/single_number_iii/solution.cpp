class Solution {
public:
    vector<int> singleNumber(vector<int>& n) {
        vector<int>v;
        unordered_map<int,int>m;
        for(int i : n) m[i]++;
        for(auto [k,l] : m) if(l==1) v.push_back(k);
        return v;
    }
};
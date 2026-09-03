class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& i1, vector<vector<int>>& i2) {
        unordered_map<int,int>m;
        for(auto i : i1) m[i[0]]+=i[1];
        for(auto i : i2) m[i[0]]+=i[1];
        vector<vector<int>>v;
        for(auto [k,l] : m) v.push_back({k,l});
        sort(v.begin(),v.end());
        return v;
    }
};
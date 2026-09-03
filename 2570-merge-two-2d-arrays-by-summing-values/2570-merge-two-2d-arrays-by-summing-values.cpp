class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& i1, vector<vector<int>>& i2) {
        vector<int>m(1001,0);
        for(auto i : i1) m[i[0]]+=i[1];
        for(auto i : i2) m[i[0]]+=i[1];
        vector<vector<int>>v;
        for(int i=1;i<=1000;i++) if(m[i]>0) v.push_back({i,m[i]});
        return v;
    }
};
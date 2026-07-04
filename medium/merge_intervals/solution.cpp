class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        vector<vector<int>>v;
        v.push_back({in[0][0],in[0][1]});
        for(int i=1;i<in.size();i++){
            int n=v.size()-1;
            if (v[n][1]>in[i][1] && v[n][0]<=in[i][0]) continue;
            else if(v[n][1]>=in[i][0]) v[n][1]=in[i][1];
            else v.push_back({in[i][0],in[i][1]});
        }
        return v;
    }
};
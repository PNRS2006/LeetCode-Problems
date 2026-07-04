class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& p) {
        vector<int>v;
        for(int i=0;i<p.size();i++) v.push_back(p[i][0]);
        sort(v.begin(),v.end());
        int a=0;
        for(int i=0;i<v.size()-1;i++) a = max(a , v[i+1]-v[i]);
        return a;
    }
};
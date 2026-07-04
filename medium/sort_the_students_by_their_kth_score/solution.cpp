class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& s, int k) {
        vector<pair<int,int>>p;
        for(int i=0;i<s.size();i++) p.push_back({s[i][k],i});
        sort(p.rbegin(),p.rend());
        vector<vector<int>> v(s.size(), vector<int>(s[0].size()));
        int h=0;
        for(auto &l : p){
            int i=l.second;
            for(int j=0;j<s[0].size();j++) v[h][j] = s[i][j];
            h++;
        }
        return v;
    }
};
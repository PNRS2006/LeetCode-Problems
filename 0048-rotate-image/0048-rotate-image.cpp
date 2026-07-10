class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        vector<vector<int>>v = m;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[i].size();j++){
                m[i][j] = v[j][i];
            }
        }
        for(int i=0;i<m.size();i++){
            reverse(m[i].begin(),m[i].end());
        }
    }
};
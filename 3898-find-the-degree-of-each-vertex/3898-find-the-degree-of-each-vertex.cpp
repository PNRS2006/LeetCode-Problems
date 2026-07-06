class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& m) {
        vector<vector<int>>e(m.size());
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m.size();j++){
                if(m[i][j]==1){
                    e[i].push_back(j);
                }
            }
        }
        vector<int>v(e.size(),0);
        for(int i=0;i<e.size();i++){
            v[i] = e[i].size();
        }
        return v;
    }
};
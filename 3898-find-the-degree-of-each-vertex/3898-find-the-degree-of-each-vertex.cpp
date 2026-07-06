class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& m) {
        vector<vector<int>>e(m.size());
        vector<int>v(e.size(),0);
        for(int i=0;i<m.size();i++){
            int c=0;
            for(int j=0;j<m.size();j++){
                if(m[i][j]==1) c++;
            }
            v[i]=c;
        }
        return v;
    }
};
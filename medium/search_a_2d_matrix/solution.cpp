class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int n = m[0].size();
        int a=-1;
        for(int i=0;i<m.size();i++){
            if(t<=m[i][n-1]) {
                a=i;
                break;
            }
        }
        if(a==-1) return false;
        for(int i=0;i<m[a].size();i++) if(m[a][i]==t) return true;
        return false;
    }
};
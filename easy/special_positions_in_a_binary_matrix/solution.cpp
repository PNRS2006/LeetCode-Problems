class Solution {
public:
    int numSpecial(vector<vector<int>>& m) {
        vector<int>row(m.size(),0);
        vector<int>col(m[0].size(),0);
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==1) {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        int c=0;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==1 && row[i]==1 && col[j]==1) c++;
            }
        }
        return c;
    }
};
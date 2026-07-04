class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        vector<int>rows(m,0),cols(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    rows[i]=1;
                    cols[j]=1;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(rows[i]==1 || cols[j]==1) mat[i][j]=0;
            }
        }
    }
};
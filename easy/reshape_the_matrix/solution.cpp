class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(m*n != r*c) return mat;
        vector<vector<int>>v(r,vector<int>(c));
        int a=0 , b=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v[a][b] = mat[i][j];
                if(b==c-1){
                    b=0;
                    a++;
                }
                else b++;
            }
        }
        return v;
    }
};
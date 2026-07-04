class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& o, int m, int n) {
        if(o.size() != m*n) return {};
        vector<vector<int>>v(m,vector<int>(n));
        int i=0,j=0;
        for(int k=0;k<o.size();k++){
            v[i][j] = o[k];
            if(j==n-1){
                i++;
                j=0;
            }
            else j++;
        }
        return v;
    }
};
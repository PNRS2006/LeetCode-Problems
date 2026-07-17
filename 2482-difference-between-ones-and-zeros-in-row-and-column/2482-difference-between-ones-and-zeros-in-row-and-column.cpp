class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
        vector<vector<int>>diff(n,vector<int>(m,0));
        vector<int>r , c;
        for(int i=0;i<n;i++){
            int z=0 , e=0;
            for(int j=0;j<m;j++){
                if(g[i][j]==0) z++;
                else e+=g[i][j];
            }
            r.push_back(e-z);
        }
        for(int j=0;j<m;j++){
            int z=0 , e=0;
            for(int i=0;i<n;i++){
                if(g[i][j]==0) z++;
                else e+=g[i][j];
            }
            c.push_back(e-z);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                diff[i][j] = r[i]+c[j];
            }
        }
        
        return diff;
    }
};
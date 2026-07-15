class Solution {
private:
    void dfs(int row, int col, vector<vector<char>>& g, vector<vector<int>>& vis, vector<int>& delcol, vector<int>& delrow){
        vis[row][col] = 1;

        int n = g.size();
        int m = g[0].size();

        for(int i=0;i<4;i++){
            int nrow = delrow[i]+row;
            int ncol = delcol[i]+col;
            if(nrow>=0 && nrow<n &&  ncol>=0 && ncol<m && !vis[nrow][ncol] && g[nrow][ncol]=='O') {
                dfs(nrow,ncol,g,vis,delcol,delrow);
            }
        }
    }
public:
    void solve(vector<vector<char>>& g) {
        int n = g.size();
        int m = g[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));

        vector<int>delrow = {-1, 0, +1, 0};
        vector<int>delcol = {0, +1, 0, -1};

        for(int i=0;i<m;i++){
            if(g[0][i]=='O' && !vis[0][i]) dfs(0,i,g,vis,delcol,delrow);
            if(g[n-1][i]=='O' && !vis[n-1][i]) dfs(n-1,i,g,vis,delcol,delrow);
        }

        for(int i=0;i<n;i++){
            if(g[i][0]=='O' && !vis[i][0]) dfs(i,0,g,vis,delcol,delrow);
            if(g[i][m-1]=='O' && !vis[i][m-1]) dfs(i,m-1,g,vis,delcol,delrow);
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && g[i][j]=='O') g[i][j] = 'X';
            }
        }
    }
};
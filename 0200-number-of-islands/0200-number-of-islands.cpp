class Solution {
    void dfs(vector<vector<char>>& g , vector<vector<int>>& vis, int r,int c){
        vis[r][c]=1;
        int n = g.size() , m = g[0].size();
        int delrow[] = {-1 , 0 , +1 , 0};
        int delcol[] = {0 , +1 , 0 , -1};
        for(int k=0;k<4;k++){
            int nr = delrow[k]+r;
            int nc = delcol[k]+c;
            if(nr>=0 && nc>=0 && nr<n && nc<m && g[nr][nc]=='1' && !vis[nr][nc]){
                dfs(g,vis,nr,nc);
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& g) {
        int n = g.size() , m = g[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int ma = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]=='1' && !vis[i][j]){
                    dfs(g,vis,i,j);
                    ma++;
                }
            }
        }
        return ma;
    }
};
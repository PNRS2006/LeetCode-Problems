class Solution {
private:
    void dfs(vector<vector<int>>& g , vector<vector<int>>& vis, int r,int c, int &cnt){
        vis[r][c]=1;
        cnt++;
        int n = g.size() , m = g[0].size();
        int delrow[] = {-1 , 0 , +1 , 0};
        int delcol[] = {0 , +1 , 0 , -1};
        for(int k=0;k<4;k++){
            int nr = delrow[k]+r;
            int nc = delcol[k]+c;
            if(nr>=0 && nc>=0 && nr<n && nc<m && g[nr][nc]==1 && !vis[nr][nc]){
                dfs(g,vis,nr,nc,cnt);
            }
        }
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& g) {
        int n = g.size() , m = g[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int ma = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int c=0;
                if(g[i][j]==1 && !vis[i][j]){
                    dfs(g,vis,i,j,c);
                    ma = max(ma,c);
                }
            }
        }
        return ma;
    }
};
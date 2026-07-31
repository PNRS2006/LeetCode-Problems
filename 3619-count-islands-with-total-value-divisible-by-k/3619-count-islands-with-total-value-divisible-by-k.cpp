class Solution {
private:
    void fun(vector<vector<int>>& g, vector<vector<int>>& vis,int r,int c, long long& cnt){
        int n=g.size() , m=g[0].size();
        cnt+=g[r][c];
        vis[r][c]=1;
        int dr[] = {-1 , 0 , +1 , 0};
        int dc[] = {0 , +1 , 0 , -1};
        for(int i=0;i<4;i++){
            int nr = dr[i]+r;
            int nc = dc[i]+c;
            if(nr<n && nr>=0 && nc>=0 && nc<m && !vis[nr][nc] && g[nr][nc]>0) fun(g,vis,nr,nc,cnt);
        }
    }
public:
    int countIslands(vector<vector<int>>& g, int k) {
        int n=g.size() , m=g[0].size();
        int cnt=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]>0 && !vis[i][j]){
                    long long c=0;
                    fun(g,vis,i,j,c);
                    if(c%k==0) cnt++;
                }
            }
        }
        return cnt;
    }
};
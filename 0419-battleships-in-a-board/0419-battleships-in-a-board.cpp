class Solution {
    void dfs(vector<vector<char>>& g ,int r,int c){
        g[r][c] = '.';
        int n = g.size() , m = g[0].size();
        int delrow[] = {-1 , 0 , +1 , 0};
        int delcol[] = {0 , +1 , 0 , -1};
        for(int k=0;k<4;k++){
            int nr = delrow[k]+r;
            int nc = delcol[k]+c;
            if(nr>=0 && nc>=0 && nr<n && nc<m && g[nr][nc]=='X'){
                dfs(g,nr,nc);
            }
        }
    }
public:
    int countBattleships(vector<vector<char>>& g) {
        int n = g.size() , m = g[0].size();
        int ma = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]=='X'){
                    dfs(g,i,j);
                    ma++;
                }
            }
        }
        return ma;
    }
};
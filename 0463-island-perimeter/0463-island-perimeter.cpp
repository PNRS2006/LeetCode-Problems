class Solution {
public:
    int islandPerimeter(vector<vector<int>>& g) {
        int delrow[] = {-1,0,+1,0};
        int delcol[] = {0,+1,0,-1};
        int c=0;
        int n=g.size() , m=g[0].size();
        vector<vector<int>>v(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]==1) {c+=4;
                    for(int k=0;k<4;k++){
                        int nr = i+delrow[k];
                        int nc = j+delcol[k];
                        if(nr>=0 && nr<n && nc>=0 && nc<m && g[nr][nc]==1) c--;
                    }
                }
            }
        }
        return c;
    }
};
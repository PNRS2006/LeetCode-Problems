class Solution {
public:
    void gameOfLife(vector<vector<int>>& b) {
        int r[] = {-1,0,1,0,-1,1,-1,1};
        int c[] = {0,-1,0,1,-1,1,1,-1};
        vector<vector<int>>v = b;
        for(int i=0;i<b.size();i++){
            for(int j=0;j<b[0].size();j++){
                int o=0;
                for(int k=0;k<8;k++){
                    int nr=i+r[k];
                    int nc=j+c[k];
                    if(nr>=0 && nr<b.size() && nc>=0 && nc<b[0].size() && v[nr][nc]==1) o++;
                }
                if(v[i][j]==1){
                    if(o<2 || o>3) b[i][j]=0;
                }
                else {
                    if(o==3) b[i][j]=1;
                }
            }
        }
    }
};
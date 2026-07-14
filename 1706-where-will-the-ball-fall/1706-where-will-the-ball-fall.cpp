class Solution {
public:
    vector<int> findBall(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
        vector<int>v;
        for(int c=0;c<m;c++){
            int r=0 , c1=c;
            while(r<n){
                if(c1+1<m && g[r][c1]==1 && g[r][c1+1]==1){
                    r++;
                    c1++;
                    if(c1>m){
                        v.push_back(-1);
                        break;
                    }
                }
                else if(c1-1>=0 && g[r][c1]==-1 && g[r][c1-1]==-1){
                    r++;
                    c1--;
                    if(c1<0){
                        v.push_back(-1);
                        break;
                    }
                }
                else{
                    v.push_back(-1);
                    break;
                }
            }
            if(r==n) v.push_back(c1);
        }
        return v;
    }
};
class Solution {
public:
    int findCircleNum(vector<vector<int>>& c) {
        int n = c.size();
        vector<int>vis(n,0);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt++;
                vis[i]=1;
                queue<int>q;
                q.push(i);
                while(!q.empty()){
                    int nk=q.front();
                    q.pop();
                    for(int j=0;j<n;j++){
                        if(c[nk][j]==1 && !vis[j]){
                            vis[j]=1;
                            q.push(j);
                        }
                    }
                }
            }
        }
        return cnt;
    }
};
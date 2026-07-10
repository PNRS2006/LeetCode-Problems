class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& e) {
        vector<vector<int>>adj(n);
        for(auto &i : e){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        int c=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            int edge=0 , node=0;
            if(!vis[i]){
                vis[i]=1;
                queue <int>q;
                q.push(i);
                while(!q.empty()){
                    int ni = q.front();
                    q.pop();
                    edge+=adj[ni].size();
                    node++;
                    for(int k : adj[ni]){
                        if(!vis[k]){
                            vis[k]=1;
                            q.push(k);
                        }
                    }
                }
                edge/=2;
                if(edge==(node*(node-1)/2)) c++;
            }
        }
        return c;
    }
};
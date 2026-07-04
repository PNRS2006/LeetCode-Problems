class Solution {
public:
    bool validPath(int n, vector<vector<int>>& e, int s, int d) {
        if(s==d) return 1;
        vector<vector<int>>adj(n);
        for(vector<int>& i : e){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int>vis(n+1,0);
        vis[s]=1;
        queue<int>q;
        q.push(s);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto i : adj[node]){
                if(!vis[i]){
                    vis[i]=1;
                    if(i==d) return 1;
                    q.push(i);
                }
            }
        }
        return 0;
    }
};
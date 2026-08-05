class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& in) {
        vector<vector<int>>adj(n);
        for(auto &i : in) adj[i[0]].push_back(i[1]);
        vector<int>vis(n,0);
        queue<int>q;
        q.push(k);
        vis[k]=1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(int i : adj[node]){
                if(!vis[i]){
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
        for (auto &e : in) {
            int u = e[0], v = e[1];
            if (!vis[u] && vis[v]) {
                vector<int> ans;
                for (int i = 0; i < n; i++) ans.push_back(i);
                return ans;
            }
        }
        vector<int>v;
        for(int j=0;j<n;j++) if(!vis[j])v.push_back(j);
        return v;
    }
};
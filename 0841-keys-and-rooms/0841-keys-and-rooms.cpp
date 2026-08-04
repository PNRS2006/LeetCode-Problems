class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& r) {
         vector<int>vis(r.size(),0);
        queue<int>q;
        int c=0;
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            c++;
            for(int i : r[node]){
                if(!vis[i]){
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
        return c==r.size();
    }
};
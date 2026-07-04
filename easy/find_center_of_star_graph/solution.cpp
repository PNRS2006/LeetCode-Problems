class Solution {
public:
    int findCenter(vector<vector<int>>& e) {
        vector<int>vis((int)e.size()+2,0);
        vis[0]=1;
        for(vector<int>& i : e){
            if(vis[i[0]]) return i[0];
            if(vis[i[1]]) return i[1];
            vis[i[0]]=1;
            vis[i[1]]=1;
        }
        return 0;
    }
};
class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int m  = grid.size();
        int n = grid[0].size();
        unordered_map<int , vector<int>>mp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int key = i-j;
                mp[key].push_back(grid[i][j]);
            }
        }
        for(auto &p : mp){
            if(p.first < 0) sort(p.second.rbegin(),p.second.rend());
            else sort(p.second.begin(),p.second.end());
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int key = i-j;
                grid[i][j] = mp[key].back();
                mp[key].pop_back();
            }
        }
        return grid;
    }
};
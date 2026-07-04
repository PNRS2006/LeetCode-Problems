class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& g) {
        int sum = 0;
        int r = g[0].size()-1;
        for(int i=0;i<g.size();i++) sort(g[i].begin(),g[i].end());
        while(r>=0){
            int ma = 0;
            for(int i=0;i<g.size();i++){
                ma = max(ma , g[i][r]);
            }
            cout << ma << " ";
            sum+=ma;
            r--;
        }
        return sum;
    }
};
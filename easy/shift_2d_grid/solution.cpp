class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& g, int k) {
        vector<int>v;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                v.push_back(g[i][j]);
            }
        }
        int n=v.size();
        vector<int>a(n);
        k%=n; 
        int l=0;
        for(int i=0;i<n;i++) a[i] = v[(n+i-k)%n];
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                g[i][j] = a[l++];
            }
        }
        return g;
    }
};
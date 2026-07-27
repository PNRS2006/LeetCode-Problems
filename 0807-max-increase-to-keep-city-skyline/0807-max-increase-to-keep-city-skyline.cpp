class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& g) {
        vector<int>r , c;
        int n=g.size() , m=g[0].size() , s=0;
        for(auto &i : g){
            int k = *max_element(i.begin(),i.end());
            r.push_back(k);
        }
        for(int j=0;j<m;j++){
            int k=INT_MIN;
            for(int i=0;i<n;i++){
                k = max(k,g[i][j]);
            }
            c.push_back(k);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int k = min(r[i],c[j]);
                s+=(k-g[i][j]);
            }
        }
        return s;
    }
};
class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        vector<int>a;
        int n=m.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a.push_back(m[i][j]);
            }
        }
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            if(i==k-1) return a[i];
        }
        return 0;
    }
};
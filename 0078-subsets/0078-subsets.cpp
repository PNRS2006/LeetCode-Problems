class Solution {
public:
    void permute(int idx ,vector<vector<int>>&v, vector<int>a,vector<int>&ds,int n){
        if(idx == n){
            v.push_back(ds);
            return;
        }
        ds.push_back(a[idx]);
        permute(idx+1,v,a,ds,n);
        ds.pop_back();
        permute(idx+1,v,a,ds,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>v;
        permute(0,v,nums,ds,nums.size());
        return v;
    }
};

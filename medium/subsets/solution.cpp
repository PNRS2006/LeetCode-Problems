class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int t = 1<<n;
        vector<vector<int>>v;
        for(int i=0;i<t;i++){
            vector<int>s;
            for(int j=0;j<n;j++){
                if(i&(1<<j)) s.push_back(nums[j]);
            }
            v.push_back(s);
        }
        return v;
    }
};

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>v;
        for(int j=0;j<nums[0].size();j++){
            int k=1;
            for(int i=1;i<nums.size();i++){
                if(find(nums[i].begin(),nums[i].end(),nums[0][j])!=nums[i].end()) k++;
            }
            if(k==nums.size()) v.push_back(nums[0][j]);
        }
        sort(v.begin(),v.end());
        return v;
    }
};
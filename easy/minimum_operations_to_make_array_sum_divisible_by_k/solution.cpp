class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int c=0;
        for(int i : nums) c+=i;
        return c%k;
    }
};
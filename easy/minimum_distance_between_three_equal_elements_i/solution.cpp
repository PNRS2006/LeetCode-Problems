class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        bool found = false;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (nums[i] == nums[j] && nums[i] == nums[k]) {
                        int d = abs(i - j) + abs(j - k) + abs(k - i);
                        ans = min(ans, d);
                        found = true;
                    }
                }
            }
        }
        return found ? ans : -1;
    }
};

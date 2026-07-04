class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        long long ans = LLONG_MIN;
        int n = nums.size();
        vector<long long>v(n);
        v[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--) v[i] = min((long long)nums[i], v[i+1]);
        long long c = nums[0];
        for(int i=1;i<n;i++){
            c-=v[i];
            ans = max(ans,c);
            c+=v[i];
            c+=nums[i];
        }
        return ans;
    }
};
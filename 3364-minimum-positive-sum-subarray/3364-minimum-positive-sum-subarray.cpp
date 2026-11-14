class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum=INT_MAX;
        while(l<=r){
            int c=0;
            for(int i=0;i<l;i++) c+=nums[i];
            if(c>0) sum = min(c,sum);
            for(int i=l;i<nums.size();i++){
                c+=nums[i];
                c-=nums[i-l];
                if(c>0) sum = min(c,sum);
            }
            l++;
        }
        return sum==INT_MAX? -1 : sum;
    }
};
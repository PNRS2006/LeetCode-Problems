class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int c=nums[0];
        for(int i=0;i<nums.size();i++){
            int d=1;
            for(int j=i;j<nums.size();j++){
                d *= nums[j];
                if(d>c) c=d;
            }
        }
        return c;
    }
};
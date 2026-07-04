class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int a=*max_element(nums.begin(),nums.end());
        int c=0;
        int b=0;
        while(k--){
            c=c+a+b;
            b++;
        }
        return c;
    }
};
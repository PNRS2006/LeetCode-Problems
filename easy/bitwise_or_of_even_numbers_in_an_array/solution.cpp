class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int a=0;
        for(int i : nums){
            if(i%2==0) a|=i;
        }
        return a;
    }
};
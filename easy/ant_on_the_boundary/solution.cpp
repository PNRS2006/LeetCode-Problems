class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int c=0,d=0;
        for(int i : nums){
            c+=i;
            if(c==0) d++;
        }
        return d;
    }
};
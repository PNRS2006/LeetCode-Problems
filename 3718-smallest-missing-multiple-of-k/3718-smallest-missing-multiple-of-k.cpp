class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<int>a;
        int b=101;
        while(b>0){
            a.push_back(b*k);
            b--;
        }
        sort(a.begin(),a.end());
        int c;
        for(int i=0;i<101;i++){
            if(binary_search(nums.begin(),nums.end(),a[i])) continue;
            else {
                c=a[i];
                break;
            }
        }
        return c;
    }
};

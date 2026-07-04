class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>a;
        for(int i : nums) a[i]++;
        int m=0;
        for(auto [key,val] : a){
            int n = key;
            if(a.count(n+1)){
                m = max(m,val+a[n+1]);
            }
        }
        return m;
    }
};
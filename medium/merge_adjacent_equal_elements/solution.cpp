class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long>v;
        for(int i : nums){
            long long curr = i;
            while(!v.empty() && v.back()==curr){
                curr *= 2;
                v.pop_back();
            }
            v.push_back(curr);
        }
        return v;
    }
};
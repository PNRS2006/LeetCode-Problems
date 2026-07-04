class Solution {
public:
    bool containsDuplicate(vector<int>& n) {
        unordered_map<int,int>m;
        for(int i=0;i<n.size();i++)
        {
            m[n[i]]++;
        }
        for(auto [key,val] : m){
            if(val>1) return true;
        }
        return false;
    }
};
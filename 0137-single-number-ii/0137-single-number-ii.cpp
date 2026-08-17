class Solution {
public:
    int singleNumber(vector<int>& n) {
        unordered_map<int,int>m;
        for(int i : n) m[i]++;
        for(auto [k,v] : m) if(v==1) return k;
        return -1;
    }
};
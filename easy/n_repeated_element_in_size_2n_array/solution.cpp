class Solution {
public:
    int repeatedNTimes(vector<int>& n) {
        unordered_map<int,int>m;
        for(int i : n) m[i]++;
        for(auto [k,v] : m) if(v==n.size()/2) return k;
        return -1;
    }
};
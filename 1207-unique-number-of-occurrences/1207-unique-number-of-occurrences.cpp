class Solution {
public:
    bool uniqueOccurrences(vector<int>& a) {
        unordered_map<int,int>m;
        for(int i : a) m[i]++;
        set<int>s;
        for(auto [k,v] : m) s.insert(v);
        return s.size()==m.size();
    }
};
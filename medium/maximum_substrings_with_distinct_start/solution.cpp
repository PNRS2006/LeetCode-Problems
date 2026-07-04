class Solution {
public:
    int maxDistinct(string s) {
        set<char>t(s.begin(),s.end());
        return t.size();
    }
};

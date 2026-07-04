class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string>n;
        for(int i=0;i+k<=s.size();i++){
            string t = s.substr(i,k);
            n.insert(t);
        }
        return n.size()==(1 << k);
    }
};
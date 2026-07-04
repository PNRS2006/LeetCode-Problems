class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> m;
        for(auto c : s) m[c]++;
        for(auto c : t) m[c]--;
        for(auto [ch,cnt] : m){
            if(cnt!=0) return ch;
        }
        return 0;
    }
};
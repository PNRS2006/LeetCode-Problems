class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
        vector<int>s;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]) s.push_back(i);
        }
        if(s.size()!=2) return false;
        return (s1[s[0]]==s2[s[1]] && s1[s[1]]==s2[s[0]]);
    }
};
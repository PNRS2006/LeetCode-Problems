class Solution {
public:
    string reversePrefix(string s, int k) {
        string s1 = s.substr(0,k);
        int a = s.size();
        string s2 = s.substr(k,a);
        reverse(s1.begin(),s1.end());
        return s1+s2;
    }
};
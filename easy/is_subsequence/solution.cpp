class Solution {
public:
    bool isSubsequence(string s, string t) {
        int c=0;
        string a="";
        for(int j=0;j<t.size();j++){
            if(s[c]==t[j]) {
                a+=t[j];
                c++;
            }
        }
        return a==s;
    }
};
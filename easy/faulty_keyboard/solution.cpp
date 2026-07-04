class Solution {
public:
    string finalString(string s) {
        string t="";
        int i=0;
        while(i<s.size()){
            if(s[i]=='i') reverse(t.begin(),t.end());
            else t+=s[i];
            i++;
        }
        return t;
    }
};
class Solution {
public:
    string reverseOnlyLetters(string s) {
        string r;
        for(char ch : s){
            if(isalpha(ch)) r+=ch;
        }
        reverse(r.begin(),r.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])) s[i]=r[j++];
        }
        return s;
    }
};
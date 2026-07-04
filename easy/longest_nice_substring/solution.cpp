class Solution {
public:
    bool fun(string s){
        set<char>st(s.begin(),s.end());
        for(char i : s){
            if(st.count(tolower(i))==0 || st.count(toupper(i))==0) return 0;
        }
        return 1;
    }
    string longestNiceSubstring(string s) {
        string n="";
        for(int i=0;i<s.size();i++){
            string k="";
            for(int j=i;j<s.size();j++) {
                k+=s[j];
                if(fun(k) && k.size()>n.size()) n=k;
            }
        }
        return n;
    }
};
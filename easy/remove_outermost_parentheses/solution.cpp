class Solution {
public:
    string removeOuterParentheses(string s) {
        int o=1 , c=0;
        string st = "";
        for(int i=1;i<s.size();i++){
            if(s[i]=='(') o++;
            else if(s[i]==')') c++;
            if(o!=c) st+=s[i];
            if(o==c){
                if(i<s.size()) i++;
                o=1;
                c=0;
            }
        }
        return st;
    }
};
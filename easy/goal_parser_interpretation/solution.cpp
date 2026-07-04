class Solution {
public:
    string interpret(string c) {
        string s="";
        for(int i=0;i<c.size();i++){
            if(isalpha(c[i])) s+=c[i];
            else if(c[i]=='(' && c[i+1]==')') s+='o';
        }
        return s;
    }
};
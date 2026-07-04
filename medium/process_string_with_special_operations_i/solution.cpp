class Solution {
public:
    string processStr(string s) {
        string t="";
        for(char i : s){
            if(islower(i)) t+=i;
            else if(i=='*' && !t.empty()) t.pop_back();
            else if(i=='#') t+=t;
            else if(i=='%') reverse(t.begin(),t.end());
        }
        return t;
    }
};